#include <iostream>
#include <algorithm>
using namespace std;

int block[502];
int main() {
	int H, W, maxIndex = 0, maxH = 0, answer = 0, blockArea = 0;
	cin >> H >> W;
	for (int i = 1; i <= W; i++) {
		int temp;
		cin >> temp;
		if(maxH < temp) {
			maxIndex = i;
			maxH = temp;
		}
		block[i] = temp;
		blockArea += temp;
	}
	for (int i = 1; i <= maxIndex; i++) {
		block[i] = max(block[i-1], block[i]);
		answer += block[i];
	}
	for (int i = W; i > maxIndex; i--) {
		block[i] = max(block[i], block[i+1]);
		answer += block[i];
	}
	cout << answer - blockArea;
}

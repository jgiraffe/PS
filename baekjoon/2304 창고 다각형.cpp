#include <iostream>
#include <algorithm>
using namespace std;

int warehouse[1001];

int main() {
	int N, maxL = 0, maxH = 0, maxHIndex = -1, answer = 0;
	cin >> N;
	for(int i = 0; i < N; i++) {
		int L, H;
		cin >> L >> H;
		if(maxL < L) maxL = L;
		if(maxH < H) {
			maxHIndex = L;
			maxH = H;
		}
		warehouse[L] = H;
	}
	for(int i = 1; i <= maxHIndex; i++) {
		warehouse[i] = max(warehouse[i-1], warehouse[i]);
		answer += warehouse[i];
	}
	for(int i = maxL; i > maxHIndex; i--) {
		warehouse[i] = max(warehouse[i], warehouse[i+1]);
		answer += warehouse[i];
	}
	cout << answer+warehouse[0];
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<int> v;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	
	int memo = v[0], answer = v[0];
	for(int i = 1; i < n; i++) {
		memo = memo > v[i-1] ? memo + v[i] : v[i-1] + v[i];
		if(answer <= memo) answer = memo;
		if(answer <= v[i]) answer = v[i];
	}
	cout << answer;
}

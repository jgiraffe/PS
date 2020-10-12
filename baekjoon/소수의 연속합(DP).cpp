#include <iostream>
#include <vector>
using namespace std;

bool s[4000001];
int main() {
	vector<int> pn;
	s[1] = false;
	for(int i = 2; i < 4000001; i++) s[i] = true;
	for(int i = 2; i < 4000001; i++) {
		if(s[i]) pn.push_back(i);
		for(int j = i+i; j < 4000001; j+=i) s[j] = false;
	}
	int N, ans=0;
	cin >> N;
	for(int i = 0; i < pn.size(); i++) {
		int tot = 0;
		for(int j = i; j < pn.size(); j++) {
			tot += pn[j];
			if(tot == N) ans++;
			else if(tot > N) break;
		}
	}
	cout << ans;
}

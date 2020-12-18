#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> v;
    while(n) {
        v.push_back(n%10);
        n/=10;
    }
    sort(v.begin(), v.end());
    while(!v.empty()) {
        answer += v.back();
        v.pop_back();
        answer*=10;
    }
    return answer/10;
}

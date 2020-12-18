#include <vector>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> base3;
    while(n > 0) {
        base3.push_back(n%3);
        n/=3;
    }
    int cnt = 1;
    while(!base3.empty()) {
        answer += cnt * base3.back();
        base3.pop_back();
        cnt*=3;
    }
    return answer;
}

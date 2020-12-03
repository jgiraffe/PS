#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int, int>> wait;
    for(int i = 0; i < priorities.size(); i++) {
        wait.push(pair<int, int> (i, priorities[i]));
    }
    sort(priorities.begin(), priorities.end());
    while(1) {
        pair<int, int> w = wait.front();
        wait.pop();
        if(w.second < priorities.back()) {
            wait.push(w);
        } else {
            answer++;
            if(w.first == location) break;
            priorities.pop_back();
        }
    }
    return answer;
}

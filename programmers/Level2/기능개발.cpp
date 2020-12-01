#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer, deploy;
    int size = progresses.size();
    for (int i = 0; i < size; i++) {
        int day = (100 - progresses[i]) % speeds[i] == 0
            ? (100 - progresses[i]) / speeds[i]
            : (100 - progresses[i]) / speeds[i] + 1;
        deploy.push_back(day);
    }
    int cnt = 1, deployDay = deploy[0];
    for (int i = 1; i < size; i++) {
        if(deployDay >= deploy[i]) {
            cnt++;
        } else {
            deployDay = deploy[i];
            answer.push_back(cnt);
            cnt = 1;
        }
    }
    answer.push_back(cnt);
    return answer;
}

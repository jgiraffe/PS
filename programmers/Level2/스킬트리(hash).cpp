#include <vector>
#include <map>
using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    map <char, int> order;
    for (int i = 0; i < skill.length(); i++) {
        order[skill[i]] = i+1;
    }
    for (auto s : skill_trees) {
        int cnt = 1;
        bool check = true;
        for (int i = 0; i < s.length(); i++) {
            if (order[s[i]] > cnt) {
                check = false;
                break;
            } else if (order[s[i]] == cnt){
                cnt++;
            }
        }
        if(check) answer++;
    }
    return answer;
}

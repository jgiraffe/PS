#include <string>
#include <vector>
using namespace std;

int answer = 123456;

bool check(string a, string b) {
    int cnt = 0;
    int string_size = a.length();
    for(int i = 0; i < string_size; i++) {
        if(a[i] != b[i]) cnt++;
    }
    return cnt == 1 ? true : false;
}

void dfs(string begin, string target, vector<string> words, vector<bool> visit, int dis) {
    if(begin == target) {
        if(dis < answer) answer = dis;
        return;
    }
    for(int i = 0; i < words.size(); i++) {
        if(!visit[i] && check(begin, words[i])) {
            visit[i] = true;
            dfs(words[i], target, words, visit, dis + 1);
        }
    }
}

int solution(string begin, string target, vector<string> words) {
    for(int i = 0; i < words.size(); i++) {
        if(check(begin, words[i])) {
            vector<bool> visit(words.size());
            visit[i] = true;
            dfs(words[i], target, words, visit, 1);
        }
    }
    return answer == 123456 ? 0 : answer;
}

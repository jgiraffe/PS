#include <string>
#include <vector>
using namespace std;

vector<bool> visit;

void dfs(int n, int m, vector<vector<int>> v) {
    for(int i = 0; i < n; i++) {
        if(v[m][i] == 1 && !visit[i]) {
            visit[i] = true;
            dfs(n, i, v);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int cnt = 0;
    visit.resize(n);
    
    for(int i = 0; i < n; i++) {
        if(!visit[i]) {
            dfs(n, i, computers);
            cnt++;
        }
    }
    
    return cnt;
}

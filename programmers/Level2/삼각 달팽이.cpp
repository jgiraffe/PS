#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    vector<vector<int>> triangle;
    int dx[3] = {1, 0, -1}, dy[3] = {0, 1, -1};
    int x = 0, y = 0, mode = 0, max = n*(n+1)/2;
    
    for(int i = 1; i <= n; i++) {
        vector<int> temp(i, 0);
        triangle.push_back(temp);
    }
    
    for(int i = 1; i <= max; i++) {
        triangle[x][y] = i;
        if (x+dx[mode] > n-1 ||
            y+dy[mode] > n-1 ||
            (x+dx[mode] < n && y+dy[mode] < n && triangle[x+dx[mode]][y+dy[mode]]))
            mode = (mode+1) % 3;
        x = x+dx[mode];
        y = y+dy[mode];
    }
    
    for(auto i : triangle)
        for(auto j : i) 
            answer.push_back(j);
    
    return answer;
}

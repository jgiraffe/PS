#include <iostream>
#include <queue>
using namespace std;

int map[100][100];
char cArr[10001];
int dx[4] = {0, -1, 0, 1}, dy[4] = {1, 0, -1, 0};

int main() {
    int N, K, L, x = 0, y = 0, d = 0, time = 0;
    queue<int> xq, yq;

    cin >> N >> K;
    while(K--) {
        int i, j;
        cin >> i >> j;
        map[i-1][j-1] = -1;
    }

    cin >> L;
    while(L--) {
        int X;
        char C;
        cin >> X >> C;
        cArr[X] = C;
    }

    map[0][0] = 1;
    while(true) {
        time++;
        xq.push(x);
        yq.push(y);
        x+=dx[d];
        y+=dy[d];

        if(x < 0 || y < 0 || x > N-1 || y > N-1 || map[x][y] > 0) break;
        else {
            if(map[x][y] != -1) {
                map[xq.front()][yq.front()] = 0;
                xq.pop();
                yq.pop();
            }
            map[x][y] = time + 1;
        }

        if(cArr[time] == 'L') d = (d+1) % 4;
        else if(cArr[time] == 'D') d = (d+3) % 4;
    }
    cout << time;
}

#include <vector>
using namespace std;

int countOne(int n) {
    int cnt = 0;
    while(n > 0) {
        if(n % 2 == 1) cnt++;
        n/=2;
    }
    return cnt;
}

int solution(int n) {
    int one = countOne(n);
    while(1) {
        if(one == countOne(++n)) break;
    }
    return n;
}

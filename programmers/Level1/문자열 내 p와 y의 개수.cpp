#include <string>
using namespace std;

bool solution(string s) {
    int pCnt = 0, yCnt = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'p' || s[i] == 'P') pCnt++;
        else if(s[i] == 'y' || s[i] == 'Y') yCnt++;
    }
    return (pCnt == yCnt || pCnt == 0 && yCnt == 0) ? true : false;
}

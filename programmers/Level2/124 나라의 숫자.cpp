#include <string>
#include <vector>
using namespace std;

string solution(int n) {
    vector<int> temp;
    string answer = "";
    while(n > 0) {
        if (n%3 == 0) {
            answer = '4' + answer;
            n=n/3-1;
        } else {
            char c = n%3 + '0';
            answer = c + answer;
            n/=3;
        }
    }
    return answer;
}

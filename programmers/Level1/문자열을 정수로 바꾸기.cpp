/*
#include <string>
int solution(std::string s){return stoi(s);}
*/

#include <string>
using namespace std;

int solution(string s) {
    int answer = 0, n = 1;
    for(int i = s.length()-1; i > 0; i--) {
        answer += (s[i]-'0') * n;
        n*=10;
    }
    if(s[0] == '+') return answer;
    else if(s[0] == '-') return answer * -1;
    else return answer + (s[0]-'0') * n;
}

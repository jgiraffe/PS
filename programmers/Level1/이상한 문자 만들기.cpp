#include <string>
using namespace std;

string solution(string s) {
    string answer = "";
    bool even = true;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') {
            answer += s[i];
            even = true;
        } else if(even) {
            answer += toupper(s[i]);
            even = false;
        } else {
            answer += tolower(s[i]);
            even = true;
        }
    }
    return answer;
}

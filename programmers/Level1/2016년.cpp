#include <string>
#include <vector>
using namespace std;

string solution(int a, int b) {
    int months[13] = {-1, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string answer[7] = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    int day = b;
    for(int month = 1; month < a; month++) {
        day+=months[month];
    }
    return answer[day%7];
}

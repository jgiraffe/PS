#include <vector>
using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(a > b) {
        int temp = b;
        b = a;
        a = temp;
    }
    for(int number = a; number <= b; number++) {
        answer += number;
    }
    return answer;
}

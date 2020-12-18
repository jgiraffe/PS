#include <vector>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n;
    vector<int> student(n, 0);
    for(auto lost_num : lost) {
        student[lost_num-1]--;
    }
    for(auto reserve_num : reserve) {
        student[reserve_num-1]++;
    }
    for(int i = 0; i < n; i++) {
        if(student[i] == -1) {
           if(i > 0 && student[i-1] == 1) {
               student[i]++;
               student[i-1]--;
           } else if(i < n-1 && student[i+1] == 1) {
               student[i]++;
               student[i+1]--;
           } else answer--; 
        } 
    }
    return answer;
}

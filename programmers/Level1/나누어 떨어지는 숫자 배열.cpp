#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for(auto element : arr) {
        if(element % divisor == 0) answer.push_back(element);
    }
    sort(answer.begin(), answer.end());
    if(answer.empty()) answer.push_back(-1);
    return answer;
}

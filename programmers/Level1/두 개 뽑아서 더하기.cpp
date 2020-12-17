#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int size = numbers.size();
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            answer.push_back(numbers[i]+numbers[j]);
        }
    }
    sort(answer.begin(), answer.end());
    for(int i = 0; i < answer.size() - 1; i++) {
        if(answer[i] == answer[i+1]) {
            answer.erase(answer.begin()+i+1);
            i-=1;
        }
    }
    return answer;
}

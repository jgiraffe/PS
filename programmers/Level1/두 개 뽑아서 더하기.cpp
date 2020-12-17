#include <vector>
#include <set>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> answer_set;
    for(int i = 0; i < numbers.size(); i++) {
        for(int j = i+1; j < numbers.size(); j++) {
            answer_set.insert(numbers[i]+numbers[j]);
        }
    }
    answer.assign(answer_set.begin(), answer_set.end());
    return answer;
}

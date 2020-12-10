#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> scoville_heap (scoville.begin(), scoville.end());
    while(scoville_heap.top() < K) {
        if(scoville_heap.size() == 1) return -1;
        answer++;
        int temp = scoville_heap.top();
        scoville_heap.pop();
        temp = temp + 2 * scoville_heap.top();
        scoville_heap.pop();
        scoville_heap.push(temp);
    }
    return answer;
}

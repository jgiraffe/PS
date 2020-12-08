#include <vector>
#include <queue>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int time = 0, now_weight = 0;
    queue<int> trucks;
    queue<pair<int, int>> bridge;
    
    for(auto truck : truck_weights) {
        trucks.push(truck);
    }
    
    while(1) {
        time++;
        if(!bridge.empty() &&
           time - bridge.front().first == bridge_length) {
            now_weight -= bridge.front().second;
            bridge.pop();
        }
        if(!trucks.empty() &&
           bridge.size() < bridge_length &&
           now_weight + trucks.front() <= weight) {
            now_weight += trucks.front();
            bridge.push(pair<int, int>(time, trucks.front()));
            trucks.pop();
        }
        if(trucks.empty() && bridge.empty()) break;
    }
    
    return time;
}

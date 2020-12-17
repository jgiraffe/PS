#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> basket;
    for(int i = 0; i < moves.size(); i++) {
        int move = moves[i];
        for(int j = 0; j < board.size(); j++) {
            if(board[j][move-1] != 0) {
                if(!basket.empty() && basket.back() == board[j][move-1]) {
                    basket.pop_back();
                    board[j][move-1] = 0;
                    answer+=2;
                } else {
                    basket.push_back(board[j][move-1]);
                    board[j][move-1] = 0;
                }
                break;
            }
        }
        
    }
    return answer;
}

#include <string>
#include <vector>
using namespace std;

int solution(string s) {
    int len = s.length(), answer = len;
    for(int size = 1; size <= len / 2; size++) {
        int compression_len = len;
        int cnt = 0;
        string temp = s.substr(0, size);
        for(int index = size; index < len; index+=size) {
            if(temp == s.substr(index, size)) {
                if(cnt == 0) cnt = 1;
                cnt++;
                compression_len-=size;
            } else {
                if(cnt > 0) {
                    compression_len+=to_string(cnt).length();
                    cnt = 0;
                }
                temp = s.substr(index, size);
            }
        }
        if(cnt > 0) compression_len+=to_string(cnt).length();
        if(answer > compression_len) answer = compression_len;
    }
    return answer;
}

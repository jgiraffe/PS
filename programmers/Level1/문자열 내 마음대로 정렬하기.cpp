#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int m;
bool compare(string a, string b) {
    return a[m] == b[m] ? a < b : a[m] < b[m];
}
vector<string> solution(vector<string> strings, int n) {
    m = n;
    sort(strings.begin(), strings.end(), compare);
    return strings;
}

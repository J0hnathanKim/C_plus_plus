#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_map<char, int> freq;

    // 빈도수 계산
    for (char c : s) {
        freq[c]++;
    }

    // 결과 출력
    for (auto it : freq) {
        cout << it.first << " : " << it.second << "\n";
    }

    return 0;
}

// 2) 요세푸스 문제 (Josephus) - Queue
// - N명이 원형, K번째마다 제거
// - 제거되는 순서 출력 + 마지막 생존자 출력
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K; // 예: 7 3

    queue<int> q;
    for (int i = 1; i <= N; i++) q.push(i);

    vector<int> removed;

    while (!q.empty()) {
        // (K-1)명은 뒤로 보내기
        for (int i = 0; i < K - 1; i++) {
            q.push(q.front());
            q.pop();
        }
        // K번째 제거
        removed.push_back(q.front());
        q.pop();
    }

    // 제거 순서 출력 (백준 1158 스타일)
    cout << "<";
    for (int i = 0; i < (int)removed.size(); i++) {
        cout << removed[i];
        if (i != (int)removed.size() - 1) cout << ", ";
    }
    cout << ">\n";

    // 마지막 생존자(= 마지막 제거된 사람)
    cout << "Last: " << removed.back() << "\n";
    return 0;
}

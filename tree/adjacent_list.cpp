#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 6;                       // 정점 1~6
    vector<vector<int>> adj(n + 1);  // 인접 리스트

    auto addEdge = [&](int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // 트리는 보통 "무방향"으로 저장
    };

    // 그림의 트리 간선들
    addEdge(1, 4);
    addEdge(1, 6);
    addEdge(4, 3);
    addEdge(4, 5);
    addEdge(6, 2);

    // (선택) 보기 좋게 정렬
    for (int i = 1; i <= n; i++) sort(adj[i].begin(), adj[i].end());

    // 인접 리스트 출력
    for (int i = 1; i <= n; i++) {
        cout << i << ": ";
        for (int v : adj[i]) cout << v << " ";
        cout << "\n";
    }

    return 0;
}

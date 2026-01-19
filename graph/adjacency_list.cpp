#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5; // 정점 1~4 사용
    vector<vector<int>> graph(n);

    graph[1].push_back(2); //1과 2 연결
    graph[2].push_back(1); // 2와 1 연결

    graph[1].push_back(3); //1과 3 연결
    graph[3].push_back(1); //3과 1 연결

    graph[2].push_back(4); //2와 4 연결
    graph[4].push_back(2); //4와 2 연결

    graph[3].push_back(4); //3과 4연결
    graph[4].push_back(3); //4와 3 연결

    // 출력
    for (int i = 1; i <= 4; i++) {
        cout << i << ": ";
        for (int v : graph[i])
            cout << v << " ";
        cout << "\n";
    }
}

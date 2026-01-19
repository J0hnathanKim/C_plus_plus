#include <bits/stdc++.h> //graph[i][j] == 1 -> i와 j가 연결됨
using namespace std;

int main() {
    int n = 5;
    int graph[5][5] = {0};

    graph[1][2] = graph[2][1] = 1;
    graph[1][3] = graph[3][1] = 1;
    graph[2][4] = graph[4][2] = 1;
    graph[3][4] = graph[4][3] = 1;

    // 출력
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            cout << graph[i][j] << " ";
        }
        cout << "\n";
    }
}

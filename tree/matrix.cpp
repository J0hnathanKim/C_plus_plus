#include <bits/stdc++.h>
using namespace std;

int main() {
    // index 1부터 사용
    vector<int> tree(8, -1);

    tree[1] = 1;   // root
    tree[2] = 4;   // left of 1
    tree[3] = 6;   // right of 1
    tree[4] = 3;   // left of 4
    tree[5] = 5;   // right of 4
    tree[6] = 2;   // right of 6

    // 출력
    for (int i = 1; i <= 7; i++) {
        cout << "tree[" << i << "] = " << tree[i] << "\n";
    }

    return 0;
}

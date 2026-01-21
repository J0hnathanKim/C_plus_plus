#include <iostream>
#include <cmath>

using namespace std;

int N;

bool isPrime(int x) {
    if (x < 2) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;

    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0)
            return false;
    }
    return true;
}

void dfs(int cur, int len) {
    if (len == N) {
        cout << cur << "\n";
        return;
    }

    int nextDigits[4] = {1, 3, 7, 9};
    for (int d : nextDigits) {
        int next = cur * 10 + d;
        if (isPrime(next)) {
            dfs(next, len + 1);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    int start[4] = {2, 3, 5, 7};
    for (int s : start) {
        dfs(s, 1);
    }

    return 0;
}

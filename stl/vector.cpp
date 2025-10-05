#include <iostream>
#include <vector>
#include <algorithm> // sort(), find() 등
using namespace std;

int main() {
    vector<int> v = {5, 2, 9, 1, 7};

    // 정렬
    sort(v.begin(), v.end());

    // 출력
    for (int x : v)
        cout << x << " ";  // 1 2 5 7 9
}

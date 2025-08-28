#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

template <typename T>
void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    cin >> a >> b;

    mySwap(a, b);  // 참조 전달이므로 & 필요 없음

    cout << a << " " << b << endl;
    return 0;
}

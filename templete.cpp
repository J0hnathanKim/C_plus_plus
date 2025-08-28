#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 템플릿 함수: 두 값 중 큰 값 반환
template <typename T>
T myMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << myMax(3, 7) << endl;        // int
    cout << myMax(3.5, 2.1) << endl;    // double
    cout << myMax('a', 'z') << endl;    // char
}


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

// 함수 프로토타입 선언
double getAverage(int arr[], int N);

int main() {
    int N;
    cin >> N;

    int* arr = new int[N];  // 입력 후 동적할당

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    double avg = getAverage(arr, N);
    cout << avg;

    delete[] arr; // 메모리 해제
    return 0;
}

double getAverage(int arr[], int N) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }
    double avg = (double)sum / N;
    return avg;
}

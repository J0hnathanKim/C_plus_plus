#include <iostream>
using namespace std;

class IntArray {
private:
    int* arr;
    int size;

public:
    IntArray() : arr(nullptr), size(0) {          // 디폴트 생성자
        cout << "기본 생성자 호출됨!" << endl;
    }
    // 생성자: 크기를 받아서 동적 배열 할당
    IntArray(int n) : size(n) {
        arr = new int[size];
        cout << "생성자 호출됨! 크기: " << size << endl;
    }

    // 소멸자: 동적 배열 해제
    ~IntArray() {
        delete[] arr;
        cout << "소멸자 호출됨!" << endl;
    }

    // 배열 값 설정
    void set(int index, int value) {
        if (index >= 0 && index < size) {
            arr[index] = value;
        }
        else {
            cout << "인덱스 범위 초과!" << endl;
        }
    }

    // 배열 전체 출력
    void printAll() {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    IntArray myArr(5);

    myArr.set(0, 10);
    myArr.set(1, 20);
    myArr.set(2, 30);
    myArr.set(3, 40);
    myArr.set(4, 50);

    myArr.printAll();

    // main 함수가 끝나면서 소멸자 자동 호출
    return 0;
}

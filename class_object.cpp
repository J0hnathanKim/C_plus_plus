#include <iostream>
using namespace std;

class Student {
public:            // 접근 지정자 (public/private/protected)
    string name;   // 멤버 변수
    int age;

    void printInfo() {   // 멤버 함수
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s1;       // 객체 생성
    s1.name = "Alice";
    s1.age = 20;
    s1.printInfo();   // 객체 안의 함수 호출

    return 0;
}

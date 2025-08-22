#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person {
private:
    string name;
public:
    Person(string n) {   // 생성자
        name = n;
        cout << name << " created" << endl;
    }

    ~Person() {          // 소멸자
        cout << name << " destroyed" << endl;
    }
};

int main() {
    Person p1("Bob");   // "Bob created"
}                       // main 끝날 때 "Bob destroyed"





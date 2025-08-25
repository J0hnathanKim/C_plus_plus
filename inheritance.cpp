#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person() : age(0) {}
    Person(const string& n, int a) : name(n), age(a) {}

    void setInfo(const string& n, int a) {
        name = n;
        age = a;
    }

    virtual void printInfo() const {
        cout << name << " (" << age << ")";
    }

    // 가상 소멸자: Person* 로 delete 할 때 안전
    virtual ~Person() {}
};

class Student : public Person {
private:
    int score;
public:
    Student() : score(0) {}
    Student(const string& n, int a, int s) : Person(n, a), score(s) {}

    void setStudent(const string& n, int a, int s) {
        setInfo(n, a);
        score = s;
    }

    void printInfo() const override {
        cout << name << " (" << age << "): " << score << '\n';
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    // Person* 로 다형성 활용
    Person** arr = new Person*[N];

    for (int i = 0; i < N; i++) {
        string n;
        int a, s;
        cin >> n >> a >> s;
        arr[i] = new Student(n, a, s); // 업캐스팅
    }

    for (int i = 0; i < N; i++) {
        arr[i]->printInfo(); // 가상함수로 Student::printInfo 호출
    }

    // 메모리 해제
    for (int i = 0; i < N; i++) {
        delete arr[i];
    }
    delete[] arr;

    return 0;
}

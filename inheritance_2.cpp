class Person {
protected:   // 자식 클래스도 접근 가능
    string name;
    int age;
public:
    void setInfo(string n, int a) {
        name = n;
        age = a;
    }
    void printInfo() {
        cout << name << " (" << age << ")" << endl;
    }
};

// Person을 상속받는 Student
class Student : public Person {
private:
    int score;
public:
    void setStudent(string n, int a, int s) {
        setInfo(n, a);   // 부모의 함수 사용
        score = s;
    }
    void printStudent() {
        // 부모의 멤버 name, age 사용 가능
        cout << name << " (" << age << "): " << score << endl;
    }
};

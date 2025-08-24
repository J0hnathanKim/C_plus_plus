#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int score;
public:
    void setInfo(string n, int s) {
        name = n;
        score = s;
    }
    void printInfo() {
        cout << name << ": " << score << endl;
    }
    int getScore() {
        return score;
    }
};

int main() {
    int N;
    cin >> N;

    Student* students = new Student[N];  // N명의 학생을 동적 배열로 생성

    string n;
    int s;

    for (int i = 0; i < N; i++) {
        cin >> n >> s;
        students[i].setInfo(n, s);
    }

    // 입력된 학생 정보 출력
    for (int i = 0; i < N; i++) {
        students[i].printInfo();
    }

    // 평균 계산
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += students[i].getScore();
    }

    double avg = (double)sum / N;
    cout << "Average: " << avg << endl;

    delete[] students;  // 동적 메모리 해제
    return 0;
}

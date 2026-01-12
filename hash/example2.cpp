#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

struct Student {
    string name;
    int score;
};

int main() {
    unordered_map<int, Student> students;

    // 학생 정보 등록
    students[2023001] = { "Alice", 90 };
    students[2023002] = { "Bob", 85 };
    students[2023003] = { "Charlie", 95 };

    int id;
    cin >> id; // 조회할 학번 입력

    // 학생 정보 조회
    if (students.find(id) != students.end()) {
        cout << "Name: " << students[id].name << "\n";
        cout << "Score: " << students[id].score << "\n";
    }
    else {
        cout << "Student not found\n";
    }

    return 0;
}

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    unordered_map<int, vector<int>> students;

    // 점수 등록
    students[2023001].push_back(90);
    students[2023001].push_back(85);
    students[2023001].push_back(88);

    students[2023002].push_back(70);
    students[2023002].push_back(75);

    students[2023003].push_back(100);
    students[2023003].push_back(98);
    students[2023003].push_back(95);
    students[2023003].push_back(97);

    int id;
    cin >> id;  // 조회할 학번

    // 조회
    if (students.find(id) == students.end()) {
        cout << "Student not found\n";
        return 0;
    }

    int sum = 0;
    cout << "Scores: ";
    for (int score : students[id]) {
        cout << score << " ";
        sum += score;
    }

    double avg = (double)sum / students[id].size();
    cout << "\nAverage: " << avg << "\n";

    return 0;
}

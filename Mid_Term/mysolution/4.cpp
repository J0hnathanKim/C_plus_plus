#include<iostream>
#include<string>
using namespace std;
class student { // (1)요구사항: 학생 정보를 저장하기 위한 클래스 student를 작성
private:
	string name; //(2)요구사항: 클래스 멤버 변수들에 대한 접근 지정은 Private으로 지정
	int math;
	int korea;
	double average;
public:
	student() {
		name = "name";
		math = 0;
		korea = 0;
		average = 0;
	}
	void set_info(string n, int a, int b) {
		name = n;
		korea = a;
		math = b;
	}
	void set_average() {
		average = (double)(math + korea) / 2;
	}
	double get_average() {
		return average;
	}
	string get_name() {
		return name;
	}

};
int main() {
	double total_sum = 0;
	int i = 0;
	int num = 0;
	string name;
	int korea = 0;
	int math = 0;
	cout << "전체 학생 수?>>";
	cin >> num;
	int len = num;
	student* std = new student[num]; //요구사항(4): 객체 배열을 동적으로 생성
	while (num) {
		cout << i + 1 << "번 학생의 이름을 입력>>";
		cin >> name;
		cout << "국어 성적>>";
		cin >> korea;
		cout << "수학 성적>>";
		cin >> math;
		std[i].set_info(name, korea, math); //요구사항(3): 객체 배열을 사용하여 여러 학생의 정보를 저장.
		std[i].set_average();
		i++;
		num -= 1;
	}
	cout << "\n";
	for (int j = 0; j < len; j++) {
		cout << std[j].get_name() << "의 평균 성적:" << (double)std[j].get_average() << endl;
	}
	for (int k = 0; k < len; k++) {
		total_sum += std[k].get_average();
	}
	cout << '\n';
	cout << "전체 학생의 평균 성적" << (double)total_sum / len;
	delete[]std;
}

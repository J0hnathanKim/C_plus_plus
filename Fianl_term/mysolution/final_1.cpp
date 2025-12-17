#include<iostream>
#include<string>
using namespace std;

bool compare(string a, string b) { //문자열 입력을 저장하기 위해 string 타입 변수 사용, 논리값을 반환하는 bool 타입의 문자열비교 함수를 사용
	if (a == b) return true; 
	else return false;
}

int main() {
	string a;
	string b;
	cout << "사용할 비밀번호를 입력하세요>>";
	cin >> a;
	cout << "확인할 비밀번호를 입력하세요>>";
	cin >> b;
	if (compare(a, b)) cout << "비밀번호가 일치합니다"; //함수를 이용해 두 문자열을 비교하고 true값을 반환할 시 일치한다는 메세지 출력.
	else cout << "비밀번호가 일치하지 않습니다.";
}
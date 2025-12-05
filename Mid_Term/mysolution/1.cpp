#include<iostream>
#include<string>
using namespace std;
bool string_cmp(string a, string b) { //(2)요구사항 논리값을 반환하는 bool 타입의 문자열비교 함수를 사용함.
	if (a == b) return true;
	else return false;
}
int main() {
	string password; //(1)요구사항: 문자열 입력을 저장하기 위해 string타입 변수를 사용함
	string password2;
	cout << "사용할 비밀번호를 입력하세요>>";
	cin >> password;
	cout << "확인할 비밀번호를 입력하세요>>";
	cin >> password2;
	if (string_cmp(password, password2)) { //(2)요구사항 논리값을 반환하는 bool 타입의 문자열비교 함수를 사용함.
		cout << "비밀번호가 일치합니다.";
	}
	else cout << "비밀번호가 일치하지 않습니다.";
	
	return 0;
}

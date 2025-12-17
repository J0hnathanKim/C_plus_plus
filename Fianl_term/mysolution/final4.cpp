#include<iostream>
#include<string>
using namespace std;
string& update(string& a) { //고객의 주소를 참조로 받아 수정하는 함수
	string b;
	cout << "새로운 주소를 입력하세요>>";
	getline(cin, b, '\n');
	a = b;
	return a; //수정된 주소를 참조로 반환하는 함수
}

int main() {
	string ad; //주소 입력을 저장하기 위해 string 타입 변수 사용.
	cout << "현재 주소를 입력하세요 >>";
	getline(cin, ad, '\n');
	update(ad);
	cout << "변경된 주소: " << ad;

}
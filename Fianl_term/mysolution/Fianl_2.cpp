#include<iostream>
#include<string>

using namespace std;

int main() {
	string a; //문자열 입력을 저장하기 위해 string타입 변수 사용.
    string b;
	cout << "문자열을 입력하세요 (종료하려면 'exit' 입력)" << endl;
	while (true) { //exit가 입력되기 전까지 반복실행.
		cout << "입력할 문자열 >>";
		cin >> a;
		if (a == "exit") break; //exit가 입력되기전까지 반복 실행하며 exit를 입력받을 시 종료
		cout << "변환된 문자열>>";
		for (int i = 0; i < a.length(); i++) {
			if (isupper(a[i])) cout << char(tolower(a[i])); // 소문자를 대문자로 대문자를 소문자로 변환해주는 구현부분.
			else cout << char(toupper(a[i]));
		}
		cout << endl;
		cout << endl;

	}
}


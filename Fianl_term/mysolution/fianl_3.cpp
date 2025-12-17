#include<iostream>
using namespace std;
void convert(int n) { // 두 기능을 같은 이름의 함수로 구현, (초를 입력받으면 시 분 초로 변환함)
	int hr = n / 3600;
	int min = n % 3600 / 60;
	int sec = n % 3600 % 60 / 1;
	cout << hr << "시간 " << min << "분 " << sec << "초"<<endl;
}

void convert(int a, int b, int c) { // 두 기능을 같은 이름의 함수로 구현 (시 분 초를 입력받으면 초로 변환함)
	int total = (a * 3600) + (b * 60) + c;
	cout << "총 " << total << "초"<<endl;
}
int main() {
	int time;
	int hr;
	int min;
	int sec;
	int op;
	while (1) {
		cout << "변환 형식을 선택하세요 1.(초단위 -> 시 분 초) 2.(시 분 초 -> 초단위) 3.종료>>"; // 사용자가 변환형식을 선택할 수 있도록 옵션제공.
		cin >> op;
		if (op == 3) break;
		else if (op == 1) {
			cout << "초 단위의 시간>>";
			cin >> time;
			convert(time);
		}
		else if (op == 2) {
			cout << "시 분 초를 차례로 입력하세요 (예: 1 30 25)>>";
			cin >> hr >> min >> sec;
			convert(hr, min, sec);
		}

	}
	
}
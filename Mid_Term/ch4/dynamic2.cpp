#include<iostream>
using namespace std;

int main() {
	int* p = new int[5];
	if (!p) {
		cout << "Memory allocation failed!" << endl;
		return 0;
	}
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "번째 요소 입력: ";
		cin >> p[i];
	}

	for (int i = 0; i < 5; i++) {
		cout << p[i] << endl;
	}


	delete p;
}

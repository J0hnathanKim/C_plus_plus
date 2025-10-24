#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "입력할 정수의 개수: ";
	cin >> n;
	int sum = 0;
	int* p = new int[n];
	if (!p) {
		cout << "Memory allocation failed!" << endl;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 요소 입력: ";
		cin >> p[i];
	}

	
	for (int i = 0; i < n; i++) {
		sum += p[i];
	}

	cout << "평균: " <<  (double) sum / n << endl;


	delete [] p;
}

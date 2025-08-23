#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int main() {
	int a, i = 1;
	cin >> a;
	/*for (int i = 1; i <= a; i++) {
		cout << i << endl;
	} */

	while (a > 0) {
		cout << i << endl;
		i += 1;
		a--;
	}
}

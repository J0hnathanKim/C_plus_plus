#include<iostream>
using namespace std;

int main() {
	int* p = new int;
	if (!p) {
		cout << "Memory allocation failed!" << endl;
		return 0;
	}

	*p = 5;
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p;
}

#include<iostream>
#include <cstring>
using namespace std;
int main() {
	char password[11];
	cout << "If you want to exit the program, please input the password." << endl;
	while (true) {
		cout << "password>>";
		cin >> password;
		if (strcmp(password, "C++") == 0) {
			cout << "Exiting the program..." << endl;
			break;
		}
		else cout << "Wrong password" << endl;
	}
}

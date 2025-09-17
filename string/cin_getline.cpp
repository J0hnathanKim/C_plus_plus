#include<iostream>
#include <cstring>
using namespace std;

int main() {
	cout << "Type your address: ";

	char address[100];
	cin.getline(address, 100, '\n');

	cout << "Your address is " << address << "!\n";
}

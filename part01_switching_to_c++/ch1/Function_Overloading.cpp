#include<iostream>
int MyFunc(int num) {
	return num + 1;
}

int MyFunc(int num1, int num2) {
	return num1 + num2;
}

int main(void) {
	std::cout << MyFunc(3) << std::endl;
	std::cout << MyFunc(2, 3) << std::endl;
	return 0;
}

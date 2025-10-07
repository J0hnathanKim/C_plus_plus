#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
// auto assumes the type of data depends on which value you allocate in the variable.


int main() {
	auto num = 42;
	cout << num << endl;

	auto pi = 3.14159;
	cout << pi << endl;

	auto greeting = string("Hello, world!");
	cout << greeting << endl;

	return 0;
}



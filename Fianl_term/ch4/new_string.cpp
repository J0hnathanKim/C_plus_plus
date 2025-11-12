#include<iostream>
#include<string>
using namespace std;

int main() {
	string* p = new string("c++");
	p->append("Great!");
	cout << *p;
	delete p;
}

#include <iostream>
using namespace std;
class Power {

	int kick;
	int punch;
public:
	Power(int a = 0, int b = 0) {
		this->kick = a;
		this->punch = b;
	}
	void show();
	Power operator+(Power op2);
	bool operator==(Power op2);
	Power& operator+=(Power op2);
	Power operator+(int a);
};

void Power::show() {
	cout << this->kick << " " << this->punch << endl;
}

Power Power::operator+(Power op2) {
	Power tmp;
	tmp.kick = this->kick + op2.kick;
	tmp.punch = this->punch + op2.punch;
	return tmp;
}

bool Power::operator==(Power op2) {
	if (this->kick == op2.kick && this->punch == op2.punch) return true;
	else return false;
}

Power& Power::operator+=(Power op2) {
	kick = kick + op2.kick;
	punch = punch + op2.punch;
	return *this;
}

Power Power::operator+(int a) {
	Power tmp;
	tmp.kick = this->kick + a;
	tmp.punch = this->punch + a;
	return tmp;
}


int main() {
	Power a(1, 1);
	Power b(3, 4);
	Power c;
	a.show();
	b.show();
	c = a + 4;
	c.show();
}

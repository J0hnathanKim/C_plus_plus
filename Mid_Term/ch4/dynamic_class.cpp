#include<iostream>
using namespace std;
class Circle {
private:
	int radius;
public:
	Circle() {
		radius = 1;
		cout << "반지름 1 원 생성" << endl;
	}
	Circle(int r) {
		radius = r;
		cout << "반지름 " << r << " 원 생성" << endl;
	}
	~Circle() {
		cout << "반지름 " << radius << " 원 소멸" << endl;
	}
	double getArea() {
		return radius * radius * 3.14;
	}
};

int main() {
	Circle* p, * q;
	p = new Circle;
	q = new Circle(30);
	cout << p->getArea() << endl << q->getArea() << endl;
	delete p;
	delete q;
}

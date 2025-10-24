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
	int radius;
	Circle* p;
	while (1) {
		cout << "반지름을 입력하세요.(음수면 종료): ";
		cin >> radius;
		if (radius < 0) break;
		p = new Circle(radius);
		cout << "원의 면적은 " << p->getArea() << endl;
		delete p;
	}
}

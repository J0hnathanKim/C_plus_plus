#include<iostream>
using namespace std;
class Circle {
private:
	int radius;
public:
	Circle() {
		radius = 1;
		
	}
	Circle(int r) {
		radius = r;
		
	}
	~Circle() {
	}
	double getArea() {
		return radius * radius * 3.14;
	}
	void setRadius(int r) {
		radius = r;
	}
};

int main() {
	int count = 0;
	int num = 0;
	int radius;
	Circle* p;
	cout << "생성하고자 하는 원의 개수? ";
	cin >> num;
	p = new Circle[num];
	for (int i = 1; i <= num; i++) {
		cout << "원" << i << ": ";
		cin >> radius;
		p[i - 1].setRadius(radius);
	}

	for (int i = 1; i <= num; i++) {
		cout << p[i - 1].getArea() << " ";
		if (p[i - 1].getArea() >= 100 && p[i - 1].getArea() <= 200) count++;
	}

	cout << "\n면적이 100에서 200 사이인 원의 개수는 " << count;
	delete []p;
}

#include<iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "Radius " << radius << " circle has been created" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "Radius " << radius << " circle has been created" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}



int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "Area of donut is " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "Area of pizza is " << area << endl;

}

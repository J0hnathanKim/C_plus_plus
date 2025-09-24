#include<iostream>
using namespace std;
class Circle {
public:
	int radius;
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	donut.radius = 5;
	double donut_Area = donut.getArea();

	cout << "Area of donut is " << donut_Area << endl;

	Circle pizza;
	pizza.radius = 3;
	double pizza_Area = pizza.getArea();

	cout << "Area of pizza is " << pizza_Area;

}

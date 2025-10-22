#include<iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	double getArea();
	void setRadius(int r) {
		radius = r;
	}
};
Circle::Circle() {
	radius = 1;
}
Circle::Circle(int r) {
	radius = r;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}
int main() {
	Circle circleArray[2][3] = { {Circle(1), Circle(2), Circle(3)}, {Circle(4), Circle(5), Circle(6)} };
	for (int j = 0; j < 2; j++)
	{
		for (int i = 0; i < 3; i++) {
			cout << "Circle[" << j <<"," <<i<< "]의 면적은" << circleArray[j][i].getArea() << endl;
		}
	}

}

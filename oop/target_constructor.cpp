#include <iostream>
using namespace std;
class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() { cout << "(" << x << ", " << y << ")" << endl; }
};
Point::Point() : Point(0, 0) {} // mandate constructor
Point::Point(int a, int b) // target constructor
	: x(a), y(b) {
}
int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}

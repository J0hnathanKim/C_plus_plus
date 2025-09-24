#include<iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	int getArea();
	void show();
};

int Rectangle::getArea() {
	return width * height;
}

void Rectangle::show() {
	cout << "Width is " << width << " and the height is " << height;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "Area of rectangle is " << rect.getArea() << endl;
	rect.show();

}

#include <iostream>
using namespace std;
class Circle {
private:
    int radius;
public:
    Circle(); //매개변수 없는 생성자와 있는 생성자 모두 선언해줘야함! --------------> 위임생성자
    Circle(int r); // ㅇㅋ?
    double getArea();
};
Circle::Circle():Circle(1) { } // 위임생성자

Circle::Circle(int r) { //반환형 x
    radius = r;
    cout << "반지름" << radius << "생성!"<<endl;
}

double Circle::getArea() { //반환형 명시
    return radius * radius * 3.14;
}


int main() {
    Circle donut;
    Circle pizza(3);
    double donut_area = donut.getArea();
    double pizza_area = pizza.getArea();
    cout << donut_area << endl;
    cout << pizza_area << endl;

    return 0;
}

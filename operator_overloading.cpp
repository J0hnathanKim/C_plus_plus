#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // 연산자 오버로딩: + (두 Complex 더하기)
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    void print() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex a(3, 4);   // 3 + 4i
    Complex b(1, 2);   // 1 + 2i

    Complex c = a + b; // 마치 기본형처럼 더하기
    c.print();         // 4 + 6i
}

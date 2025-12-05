#include<iostream>
#include<cmath>
using namespace std;
class Point {
private:
	int x;
	int y;
	double distance;
public:
	void set_distance(int x, int y) {
		this->x = x;
		this->y = y;
		distance = sqrt((x * x) + (y * y));
	}
	double get_distance() {
		return distance;
	}
};
int main() {
	class Point p;
	int x, y;
	cin >> x >> y;
	p.set_distance(x, y);
	cout << p.get_distance();
}

#include <iostream>
#include "point.h"
using namespace std;

int main() {
    Point p;
    int x, y;

    cin >> x >> y;

    p.set_distance(x, y);

    cout << p.get_distance();

    return 0;
}

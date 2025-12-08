#include "point.h"
#include <cmath>

void Point::set_distance(int x, int y) {
    this->x = x;
    this->y = y;
    distance = std::sqrt((x * x) + (y * y));
}

double Point::get_distance() {
    return distance;
}

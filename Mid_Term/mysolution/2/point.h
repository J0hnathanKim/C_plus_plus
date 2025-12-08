#ifndef POINT_H
#define POINT_H

class Point {
private:
    int x;
    int y;
    double distance;

public:
    void set_distance(int x, int y);
    double get_distance();
};

#endif

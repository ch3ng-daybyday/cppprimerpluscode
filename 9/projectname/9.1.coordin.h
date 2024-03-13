// #pragma once;
#include <iostream>
#include <cmath>
struct polar{
    double distance;
    double angle;
};
struct rect{
    double x;
    double y;
};
polar rect_to_polar(rect);
void show_polar(polar);
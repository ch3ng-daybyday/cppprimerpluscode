#pragma once
// #ifndef COORDIN_H_
// #define COORDIN_H_
// #pragma once
struct polar
{
    double distance;
    double angle;
};
struct rect
{
    double x;
    double y;
};
polar rect_to_polar(rect);
void show_polar(polar);
// #endif
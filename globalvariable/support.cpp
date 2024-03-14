#include <iostream>
extern double warming;
// function prototypes
void update();
void local();
using std::cout;
void update(double dt)
{
    extern double warming;
    warming += dt;
    cout << "Updateing global warming to " << warming;
    cout << " drgees.\n";
}
void local()
{
    double warming = 0.8;
    cout << "Local warming = " << warming << " dregees.\n";
    cout << "But global warming = " <<::warming;
    cout << " degrees.\n";
}

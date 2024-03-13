#include <iostream>
inline double sqaure(double a,double b);
int main()  
{
    using namespace  std;
    double a,b;
    a  = sqaure(5,6);
    cout <<   a << endl;
    return 0;
}
inline double sqaure(double a,double b){
    return a * b;
}
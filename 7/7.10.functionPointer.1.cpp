// 用于深入探讨函数指针
#include <iostream>
// const double *f1(const double *ar, int n);
const double *f1(const double ar[], int); // 函数原型
const double *f2(const double[], int n);
// const double *f2(const double *, int n);
const double *f3(const double ar[], int n);
const double *f4(const double ar[], int n); 
int main()
{
    using namespace std;
    double av[3] = {1112.3, 1543.6, 2227.9};
    const double *(*p1)(const double *, int) = f1;
    auto p2 = f2;
    const double *(*p3[4])(const double *, int) = {f1, f2, f3, f4};
    auto pb = p3; // pb 指向 p3 也就是第一个元素的地址
    // double *(**pb)(const double *, int ) ；
    cout << "Address"
         << "\t"
         << "value\n";
    cout << (*p1)(av, 3) << ": \t" << *(*p1)(av, 3) << "\n";
    cout << (*p1)(av, 3) << ": \t" << *(p1)(av, 3) << "\n"; // 和上面一个是等价的
    cout << (*p2)(av, 3) << ": \t" << *p2(av, 3) << "\n";
    // cout << (*p3[2])(av, 3) << ": \t" << *(*p3[2])(av, 3) << "\n";
    // cout << (**pb)(av, 3) << ": \t" << *(**pb)(av, 3) << "\n";
    for (int i = 0; i < 4; ++i)
    {
        cout << (*p3[i])(av, 3) << ":\t" << *(*p3[i])(av, 3) << "\n";
        cout << p3[i](av, 3) << ":\t" << *(p3[i](av, 3)) << "\n";
    }
    return 0;
}

const double *f1(const double *ar, int n) // 函数定义
{
    return ar; // ar + 0 &ar[0];   
}

const double *f2(const double ar[], int n)
{
    return ar + 1; // &ar[1]; //返回地址
}

const double *f3(const double ar[], int n)
{
    return ar + 2; // &ar[1]; //返回地址
}

const double *f4(const double ar[], int n)
{
    double a = 12;
    double *b = &a;
    return b;
}
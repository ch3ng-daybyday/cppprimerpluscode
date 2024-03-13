#include <iostream>
template <typename T>
T lesser(T a, T b)
{
    std::cout << "模板一：模板函数\n";
    return a < b ? a : b;
}
int lesser(int a, int b) // 自定义模板优先级更高
{
    std::cout << "模板二：模板函数\n";
    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;
    return a < b ? a : b;
}
template <>
int lesser<int>(int a, int b)
{
    std::cout << "模板三： 显示实例化\n";

    return 0;
}
int main()
{
    using namespace std;
    int m = 20;
    int n = -30;
    double x = 15.5;
    double y = 25.9;
    cout << lesser(m, n) << "\n";
    cout << lesser(x, y) << "\n";      // 相当于调用是隐式的实例化
    cout << lesser<double>(m, n) << "\n";    // 可以强制调用模板函数，相当于是显示实例化
    cout << lesser<int>(m, n) << "\n"; // 可以强制调用模板函数，相当于是显示实例化
    return 0;
}
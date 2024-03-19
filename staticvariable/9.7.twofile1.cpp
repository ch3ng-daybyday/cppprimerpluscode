#include <iostream>
int tom = 3; // 全局变量
int dick = 30;
static int harry = 300; // 静态变量
void remote_access();
int main()
{
    using namespace std;
    cout << "main() reports the following address\n";
    cout << "Tom = " << tom << " " << &tom << "= &tom,dick = " << dick << " " << &dick << "=&dick\n";
    cout << "harry = " << harry << " " << &harry << " = & harry\n";
    remote_access();
    return 0;
}
// 此处终端命令编译 g++ usestock0.cpp stock00.cpp -o a.exe

#include <iostream>
#include "stock00.h"
int main()
{
    using namespace std;
    cout << "Using constructors to create new objext\n";
    // stock fluffy_the_cat;//对应头文件中的默认构造函数stock（）函数
    stock stock1("NanoSmart", 12, 20); // 对应头文件中的带参数的stock函数
    // fluffy_the_cat.acquire("NanoSmart", 20, 12.50);

    stock1.show();
    stock stock2 = stock("Buffo Objecgts", 2, 2.0); // 调用 非默认构造函数
    stock2.show();
    cout << "Assignin stock1 to stock2\n";
    stock2 = stock1;
    cout << "listing stock1 and stock2  \n";
    stock2.show();
    cout << "using a constuctor to reset an object\n";
    stock1 = stock("Nifty Foods", 10, 50.0); // 这个函数会赋值给一个临时对象，赋值完之后，会调用析构函数销毁
    cout << "Revised stock:\n";
    stock1.show();
    cout << "done!\n";
    // fluffy_the_cat.buy(15, 18.125);
    // fluffy_the_cat.show();
    // fluffy_the_cat.sell(400, 20.00);
    // fluffy_the_cat.show();
    // fluffy_the_cat.buy(300000, 40.125);
    // fluffy_the_cat.show();
    // fluffy_the_cat.sell(300000, 0.125);
    // fluffy_the_cat.show();
    return 0;
}
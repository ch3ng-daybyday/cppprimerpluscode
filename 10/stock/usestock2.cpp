// 此处终端命令编译 g++ usetock2.cpp stock00.cpp -o a.exe
#include <iostream>
#include "stock00.h"
const int TASK = 4;
int main()
{
    stock stock1[TASK] = {
        stock("NanoSmart", 12, 20.0),
        stock("Boffo Object", 200, 2.0),
        stock("MonoLithic Obelisks", 130, 3.25),
        stock("Fleep Enterprises", 60, 6.5)};
    std::cout << "stock holding:\n";
    int st;
    for (st = 0; st < TASK; st++)
        stock1[st].show();
    const stock *top = stock1;
    for (st = 1; st < TASK; st++)
        top = &(top->topval(stock1[st]));
    std::cout << "\nMost valuable holding:\n";
    // (*top).show();
    top->show();
}
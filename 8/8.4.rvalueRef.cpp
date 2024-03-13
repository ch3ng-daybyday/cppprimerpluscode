#include <iostream>
void changeValue(int &&b);

int main()
{
    // rvalue ref try
    changeValue(10);
    return 0;
}
void changeValue(int &&b)
{
    b++;
    std::cout << b;
}

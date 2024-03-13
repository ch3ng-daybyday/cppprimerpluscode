#include <iostream>
// 主要是看显示实例化，显示具体化，以及隐形具体化
struct ST
{
    char name[10];
    unsigned int age;
    double heigh;
};

class Fun
{
public:
    template <typename T>
    void show(T &b)
    {
        T a = b + b;
        std::cout << a;
        // std::cout << "此处是模板函数\n";
    }
};
// 显示实例化
template void Fun::show<int>(int &c);
template <>
void Fun::show<ST>(ST &a) // 此处是函数具体化
{
    std::cout << "此处是函数具体化，并显示结构体 ST 的对象 " << a.name << " 的信息，年纪 " << a.age << "，身高" << a.heigh << "\n";
}

int main()
{
    ST s = {"lili", 12, 89.00};
    Fun f;
    // f.show(12);
    f.show(s);
    int a = 123;
    f.show(a);
    std::string q = "23";
    f.show(q);
    return 0;
}
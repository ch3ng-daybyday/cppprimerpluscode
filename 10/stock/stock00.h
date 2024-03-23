#pragma once

#include <string>
// 类的申明
class stock
{
private: // private 是可以不写的，类里面默认是私有的
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }

public:
    // void acquire(const std::string &co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    stock();                                                   // 析构函数                                                // 默认构造函数
    stock(const std::string &co, long n = 0, double pr = 0.0); // 非默认构造函数
    // stock(const std::string &co = " ", long n = 0, double pr = 0.0); // 默认构造函数
    ~stock();//析构函数
    const stock &topval(const stock &s) const;
};

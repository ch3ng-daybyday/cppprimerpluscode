#include "stock00.h"
#include <iostream>

// void stock::acquire(const std::string &co, long n, double pr)
// {
//     company = co;
//     if (n < 0)
//     {
//         std::cout << "Number of shares can'be negative;"
//                   << company << " shares set to 0.\n";
//         shares = 0;
//     }
//     else
//         shares = n;
//     share_val = pr;
//     set_tot();
// }
void stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchas can't be negative. "
                  << " Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
    // std::cout << company << std::endl;
}

void stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        std::cout << "Number of shares purchas can't be negative. "
                  << " Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have"
             << " Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void stock::update(double price)
{
    share_val = price;
    set_tot();
}

void stock::show() const
{
    using std::cout;
    using std::ios_base;
    ios_base::fmtflags orig =
        cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);
    cout << "Company:" << company
         << " Shares :" << shares << '\n'
         << " Shares Price: $" << share_val
         << " Total Worth: $" << total_val << '\n';
    cout.precision(2);
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}
stock::stock(const std::string &co, long n, double pr)
{
    std::cout << "Constuctor using " << co << " called\n";
    company = co;
    if (n < 0)
    {
        std::cout << "Number of shares can'be negative; "
                  << company << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}
stock::stock()
{
    std::cout << "Default constuctor called\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}
stock::~stock()
{
    std::cout << "clear!!!" << company << "\n";
}
const stock &stock::topval(const stock &s) const
{
    if (this->total_val > s.total_val)
    {
        return *this; // this 指针
    }
    else
    {
        return s;
    }
}
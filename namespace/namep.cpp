#include <iostream>
#include "namesp.h"
namespace pers
{
    using std::cin;
    using std::cout;
    void getPerson(Person &rp)
    {
        cout << "Enter first name";
        cin >> rp.fname;
        cout << "Enter last name";
        cin >> rp.lname;
    }
    void showPerson(const Person &rp)
    {
        std::cout << rp.fname << "," << rp.lname;
    }

}

namespace debts
{
    void getDebt(Dept &rd)
    {
        pers::getPerson(rd.name);
        std::cout << "Enter debt";
        std::cin >> rd.amount;
    }
    void showDebt(const Dept &rd)
    {
        pers::showPerson(rd.name);
        std::cout << ": $" << rd.amount << std::endl;
    }
    double sumDebts(Dept *ar, int n)
    {
        double total = 0;
        int i = 0;
        while (i < n)
        {
            total += ar[i].amount;
            i++;
        }
        return total;
    }
}
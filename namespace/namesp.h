#include <iostream>
namespace pers
{
    // using std::cin;
    // using std::cout;
    struct Person
    {
        std::string fname;
        std::string lname;
    };
    void getPerson(Person &rp);
    void showPerson(const Person &rp);
}

namespace debts
{
    using namespace pers;
    struct Dept
    {
        Person name;
        double amount;
    };
    void getDebt(Dept &rd);
    void showDebt(const Dept &rd);
    double sumDebts(Dept *ar, int n);
}

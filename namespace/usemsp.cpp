#include <iostream>
#include "namesp.h"
void other();
void another();
int main()
{
    using debts::Dept;
    Dept golf = {
        {"Benny", "Goatsniff"}, 12.0};
    // golf.showDebt
    debts::showDebt(golf);
    other();
another()
}
void other()
{
    using std::cout;
    using std::endl;
    using namespace debts;
    Person dg = {"Doodles", "Glister"};
    showPerson(dg);
    cout << endl;
    Dept zippy[3];
    int i = 0;
    for (; i < 3; i++)
    {
        getDebt(zippy[i]);
    }
    for (i = 0; i < 3; i++)
    {
        showDebt(zippy[i]);
    }
    cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
}
void another()
{
    using pers::Person;
    Person collector = {"Mild", "Rightshift"};
    pers::showPerson(collector);
    std::cout << std::endl;
}
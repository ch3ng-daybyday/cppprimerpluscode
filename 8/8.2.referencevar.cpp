#include <iostream>
int main()
{
    using namespace std;
    int rats = 101;
    int &rodents = rats; // rodents 引用了 rats
    cout << "rat = " << rats << "\n";
    cout << ",rodents " << rodents << "\n";
    rodents++;

    cout << "rat = " << rats << "\n";
    cout << ",rodents " << rodents << "\n";
    cout << "rat address = " << &rats << "\n";
    cout << "rat address = " << &rodents << "\n";
 
    return 0;
}
 
#include <iostream>
int main()
{
    using namespace std;
    int rats = 101;
    int &rodents = rats;
    cout << "rats  = " << rats << "\n";
    cout << ",rodents  = " << rodents << "\n";
    cout << "rats address = " << &rats << "\n";
    cout << "rodents address = " << &rodents << "\n";
    int bunnies = 50;
    rodents = bunnies;
    cout << "bunnies = " << bunnies;
    cout << ",rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    cout << "bunnies address = " << &bunnies << endl;
    cout << "rodents address = " << &rodents << endl;
    return 0;
}

#include <iostream>
void oil(int);
int main()
{
    using namespace std;
    int texas = 31;
    int year = 2011;
    cout << "In main(),texas = " << texas << ",&texas=" << &texas << "\n";
    cout << "In main(),year = " << year << ",&year = " << &year << "\n";
    oil(texas);
}

void oil(int x)
{
    using namespace std;
    decltype(x) texas = 5;
    cout << "In oil(),texas = " << texas << ",&texas=" << &texas << "\n";
    cout << "In oil(),x = " << x << ",&x = " << &x << "\n";
    {
        int texas = 113;
        cout << "In Bloc  k,texas = " << texas << ",&texas=" << &texas << "\n";
        cout << "In Block,x = " << x << ",&x = " << &x << "\n";
    }
    cout << "Post-block texas = " << texas;
    cout << ", &texas = " << &texas << "\n";
}
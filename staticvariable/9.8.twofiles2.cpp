#include <iostream>
extern int tom;
static int dick = 10;
extern int dick;    
int harry = 200;
void remote_access()
{
    using namespace std;
    cout << " now remote_access\n";
    cout << "main() reports the following address\n";
    cout << "Tom = " << tom << " " << &tom << "= &tom,dick = " << dick << " " << &dick << "=&dick\n";
    cout << "harry = " << harry << " " << &harry << " = & harry\n";

    // return 0;
}
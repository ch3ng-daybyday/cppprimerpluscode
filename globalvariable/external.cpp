#include <iostream>
using std::cout;
// external variable
double warming = 0.3;
void update(double dt);
void local();
int main()
{
    cout << "Global warming is " << warming << " degrees.\n";
    update(0.1);
    cout << "Global warming is " << warming << " degrees.\n";

    local();
    cout << "Global warming is " << warming << " degrees.\n";
    ::local();
    return 0;
}

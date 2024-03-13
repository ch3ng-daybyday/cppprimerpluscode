#include <iostream>
double betsy(int lns);
double pam(int lns);
void estimate(int lines, double (*pf)(int));
int main()
{
    using namespace std;
    int code;
    cout << "How many Lines of code do you need ";
    cin >> code;
    cout << "here's Betsy‘s estimate :\n";
    estimate(code, betsy);
    cout << "here's pam‘s estimate :\n";
    estimate(code, pam);
    return 0;
}
double betsy(int lns)
{
    return 0.05 * lns;
}
double pam(int lns)
{
    return 0.03 * lns + 0.004 * lns * lns;
}

void estimate(int lines, double (*pf)(int))
{
    using namespace std;
    cout << lines << " lines will take";
    cout << (*pf)(lines) << " hours\n";
}
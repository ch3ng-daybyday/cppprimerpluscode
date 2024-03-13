#include <iostream>
char *left(const char *str, int n);
unsigned long left(unsigned long num, unsigned ct);
int main()
{
    using namespace std;
    const char *trip = "hawaii";
    unsigned long n = 12345678;
    for (int i = 1; i < 10; i++)
    {
        cout << left(n, i) << endl;
        char *temp = left(trip, i);
        cout << temp << endl;
        delete[] temp;
    }
    return 0;
}
char *left(const char *str, int n)
{
    if (n < 0)
        n = 0;
    char *p = new char[n + 1];
    int i;
    for (i = 0; i < n && str[i]; i++)
    {
        p[i] = str[i];
    }
    while (i <= n)
    {
        p[i++] = '\0';
    }
    return p;
}
unsigned long left(unsigned long num, unsigned ct)
{
    unsigned digits = 1;
    unsigned long n = num;
    if (ct == 0 || num == 0)
        return 0;
    // check  how many bit；
    while (n /=10)
    {
        digits++;
    }
    if (digits > ct)
    {
        ct = digits - ct;
        while (ct--)
        {
            num /= 10;
        }
        return num;
    }
    else
    {
        return num;
    }
}

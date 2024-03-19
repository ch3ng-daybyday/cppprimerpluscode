#include <iostream>
const int ArSize = 10;
void strcount(const char *);

int main()
{
    using namespace std;
    char input[ArSize];
    char next;
    cout << "Enter a line:\n";
    cin.get(input, ArSize);
    while (cin)
    {
        cin.get(next);
        while (next != '\n')//该循环保证cin里面没有\n,  
            cin.get(next);
        strcount(input);
        cout << "Enter next line (empty line to quit) :\n";
        cin.get(input, ArSize);
    }
    cout << "Bye;";
    return 0;
}

void strcount(const char *str)
{
    using namespace std;
    static int total = 0;//此处 total 为无连接变量，只在当前代码块中可用，但是他会在程序结束前一直有效
        int count = 0;
    cout << "\"" << str << "\"contains ";
    while (*str++)
    {
        count++;
    }
    total += count;
    cout << count << " Characters\n";
    cout << total << " Characters total\n";
}
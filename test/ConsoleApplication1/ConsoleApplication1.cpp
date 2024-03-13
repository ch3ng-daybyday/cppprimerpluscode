#include <iostream>
struct debts
{
    /* data */
    char name[50];
    double amount;
};
template <typename T>
void ShowArray(T*, int);
template <typename T>
void ShowArry(T** arr, int n);
int main()
{
    using namespace std;
    int thing[6] = { 12, 31, 103, 301, 310, 130 };
    debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0},
    };
    double* pd[3];
    for (int i = 0; i < 3; i++)
    {
        pd[i] = &mr_E[i].amount;
    }
    cout << "Liting Mr.E's debts:\n";
    ShowArray(thing, 6);
    ShowArray(pd, 3);
    return 0;
}

template <typename T>
void ShowArray(T* arr, int n)
{
    using namespace std;
    cout << "template A\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
}
template <typename T>
void ShowArry(T** arr, int n)
{
    using namespace std;
    cout << "template B\n";
    for (int i = 0; i < n; i++)
    {
        cout << *arr[i] << ' ';
    }
}

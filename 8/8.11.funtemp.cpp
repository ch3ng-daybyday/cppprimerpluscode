#include <iostream>
void show(int *n);
template <typename T>
void Swap(T &a, T &b);
template <typename T>
void Swap(T *a, T *b, int n);
const int Lim = 8;
int main()
{
    using namespace std;
    int i = 10;
    int j = 20;
    cout << " i ,J = " << i << " , " << j << endl;
    cout << "using complier-generated int  swapper:";
    Swap(i, j);
    cout << "Now i ,j = " << i << "," << j << "\n";
    double x = 24.5;
    double y = 81.7;
    cout << " x,y = " << x << " , " << y << endl;
    cout << "using complier-generated int  swapper:";
    Swap(x, y);
    cout << "Now x,y = " << x << "," << y <  < "\n";
    int d1[Lim] = {0, 7, 0, 4, 1, 7, 7, 6};
    int d2[Lim] = {0, 7, 2, 0, 1, 9, 6, 9};
    cout << "Orginginal ararry:";

    show(d1);
    show(d2);
    Swap(d1, d2, Lim);
    cout << "Swapped arrays:\n";
    show(d1);
    show(d2);
    return 0;
}
template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

void show(int *a)
{
    using namespace std;
    cout << a[0] << a[1] << endl;
    cout << a[2] << a[3] << endl;
    for (int i = 4; i < Lim; i++)
    {
        cout << a[i] << "\n";
    }
}

template <typename T>
void Swap(T *a, T *b, int n)
{
    int temp;
    for (int i = 0; i < Lim; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

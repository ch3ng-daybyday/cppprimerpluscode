#include <iostream>

struct job
{
    char name[40];
    double salary;
    int floor;
};
void Show(const job &);
template <typename T>
void Swap(T &, T &);
template <>
void Swap(job &a, job &b);
int main()
{
    using namespace std;
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    job sue = {"Susan Yarre", 73000.60, 7};
    job sidney = {"Sideney Taffee", 78060.72, 9};
    cout << "Before job swapping:\n";
    Show(sue);
    Show(sidney);
    cout << "After job swapping : \n";
    Swap(sue, sidney);
    Show(sue);
    Show(sidney);
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
template <>
void Swap(job &a, job &b) // 具体化模板
{
    double t1;
    int t2;
    t1 = a.salary;
    a.salary = b.salary;
    b.salary = t1;

    t2 = a.floor;
    a.floor = b.floor;
    b.floor = t2;
}
// template <>void Swap(job & ,job&)

void Show(const job &j)
{
    using namespace std;
    cout << j.name << ":  $" << j.salary << " on floor " << j.floor << endl;
}
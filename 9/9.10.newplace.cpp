#include <iostream>
const int BUF = 512;
const int N = 5;
char buffer[BUF]; // 在静态区开辟内存空间
int main()
{
    using namespace std;
    double *pd1, *pd2;
    int i;
    cout << " Calling new andf palcement new:\n";
    pd1 = new double[N];          // 从堆中开辟N个double类型的内存空间，并把地址传给pd1；
    pd2 = new (buffer) double[N]; // 此时定位到首地址是buffer,开辟N个double类型的内存空间，并把地址传给pd2
    for (i = 0; i < N; i++)
    {
        pd2[i] = pd1[i] = 1000 + 2.0 * i;
    }
    cout << "Memory addreasses:\n"
         << " heap:" << pd1 << " static: " << (void *)buffer << endl;
    cout << "Memory contents:\n";
    for (i = 0; i < N; i++)
    {
        cout << pd1[i] << " at " << &pd1[i] << "; ";
        cout << pd2[i] << " at " << &pd2[i] << ";\n";
    }
    cout << " \ncalling new and placement new a second time\n";
    double *pd3, *pd4;
    pd3 = new double[N];
    pd4 = new (buffer) double[N]; // 会把之前定位的内存的地址重新覆盖一遍
    for (i = 0; i < N; i++)
    {
        pd4[i] = pd3[i] = 1000 + 40.0 * i;
    } 
    // cout << "Memory addreasses:\n"
    //      << " heap:" << pd1 << " static: " << (void *)buffer << endl;
    cout << "Memory contents:\n";
    for (i = 0; i < N; i++)
    {
        cout << pd3[i] << " at " << &pd3[i] << ";";

        cout << pd4[i] << " at " << &pd4[i] << ";\n";
    }
    cout << "\nCalling new and placement new a third time:\n";
    delete[] pd1;
    // delete[]pd4; delete[]pd2不允许因为buffer是静态空间；
    pd1 = new double[N];
    pd2 = new (buffer + N * sizeof(double)) double[N]; // 相当于从buffer的首地址开始往后移动了5个double类型的空间
    for (i = 0; i < N; i++)
    {
        pd2[i] = pd1[i] = 1000 + 60.0 * i;
    }
    cout << "Memory contents:\n";
    for (i = 0; i < N; i++)
    {
        cout << pd1[i] << " at " << &pd1[i] << "; ";
        cout << pd2[i] << " at " << &pd2[i] << ";\n";
    }
    return 0;
}
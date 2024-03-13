#include <iostream>
#include <fstream>
const int LIMIT = 5;
using namespace std;

void file_it(ostream &os, double fo, const double *fr, int n);

int main()
{
    ofstream fout; // creat a obj of ofstream
    const char *fn = "ep-data.txt";
    fout.open(fn); // if is null ,will creat txt;
    if (fout.is_open())
    { // is open success;
        double objective;
        cout << "Enter the focal length of your telecope objective in mm: ";
        cin >> objective;
        double eps[LIMIT];
        cout << "Enter the focal length of eyepieces in mm: ";
        for (int i = 0; i < LIMIT; i++)
        {
            cout << "Eyepiece # " << i + 1 << ": ";
            cout << eps[i];
        }
        file_it(cout, objective, eps, LIMIT);
        file_it(fout, objective, eps, LIMIT);
    }
    else
    {
        cout << "can't open " << fn << ",Bye.";
        exit(EXIT_FAILURE);
    }

    return 0;
}

void file_it(ostream &os, double fo, const double *fe, int n)
{
    ios_base::fmtflags initial;
    initial = os.setf(ios_base::fixed); // 格式化 将对象置于使用定点表示法的模式；
    os.precision(0);

    os << "Focal length of objective :" << fo << "mm\n";
    os.setf(ios_base::showpoint);
    os.precision(1);
    os.width(12);
    os << "Focal length of eyeiece ";
    os.width(15);
    os << "maginification\n";
    for (int i = 0; i < n; i++)
    {
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int(fo / fe[i] + 0.5) << endl;
    }
}
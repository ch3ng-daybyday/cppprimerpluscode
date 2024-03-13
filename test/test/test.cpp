#include <iostream>
#include <fstream>
//#include <ostream>
using namespace std;

const int LIMIT = 5;
//void file_it(ostream& os, double fo, const double* fr, int n);
void file_it(ostream& os, double fo, const double* fr, int n);
void t();
int main()
{
	ofstream fout; // creat a obj of ofstream
	const char* fn = "ep-data.txt";
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
		// file_it(cout, objective, eps, LIMIT);
	}
	else
	{
		cout << "can't open " << fn << ",Bye.";
		exit(EXIT_FAILURE);
	}

	return 0;
}
void file_it(ostream& os, double fo, const double* fr, int n) {

}


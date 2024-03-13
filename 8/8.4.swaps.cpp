#include <iostream>
void swapr(int &, int &);
void swapp(int *, int *);
void swapv(int, int);

int main()
{
	using namespace std;
	int wallet1 = 100;
	int wallet2 = 350;
	cout << "wallet1 = " << wallet1 << " wallet2 = " << wallet2 << "\n";
	cout << "using references to swap content:\n";
	swapr(wallet1, wallet2);
	cout << "wallet1 = " << wallet1 << " wallet2 = " << wallet2 << "\n";

	cout << "using pointers to swap content;\n";
	swapp(&wallet1, &wallet2);
	cout << "wallet1 = " << wallet1 << " wallet2 = " << wallet2 << "\n";

	cout << " using values to swap content\n";
	swapv(wallet1, wallet2);
	cout << "wallet1 = " << wallet1 << " wallet2 = " << wallet2 << "\n";
	return 0;
}

void swapr(int &a, int &b)
{ // using references
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void swapp(int *p, int *q)
{ // using pointers
	int * temp = p;
	p = q;
	q = temp;
}
void swapv(int a, int b)
{
	int temp = a;
	a = b;
	b = a;
}

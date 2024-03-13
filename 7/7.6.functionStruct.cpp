// #include <iostream>

 
// int main()
// {
//     int s = 2;

//     std::cout << &s;
// }

#include <iostream>
#include <cmath>
struct polar {
	double distance;
	double angle;

};
struct rect {
	double x;
	double y;
};
void show_polar(polar dapos);
void rect_to_polar(rect* xypos, polar* pda);
int main() {
	using namespace std;
	rect rplace;
	polar pplace;
	cout << "enter the x and y value ";

	while (cin >> rplace.x >> rplace.y) {
		rect_to_polar(&rplace, &pplace);
		show_polar(pplace);
		cout << "\n Next two numbers(q to quit)" << "\n";
	}
}
void rect_to_polar(rect* xypos, polar* pda) {
	//polar aswer;
	pda->distance = sqrt(xypos->x * xypos->x + xypos->y * xypos->y);
	pda->angle = atan2(xypos->y, xypos->x);
	//return aswer;
}
void show_polar(polar dapos) {
	using namespace std;
	const double Rad_to_deg = 57.29577951;
	cout << "distance =" << dapos.distance;
	cout << ",angle = " << dapos.angle * Rad_to_deg;
}

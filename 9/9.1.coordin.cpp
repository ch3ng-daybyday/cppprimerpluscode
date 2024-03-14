// #include <iostream>
// #include "9.1.coordin.h"
// #include "9.1.coordin.h"
// #include <cmath>
// // #include "9.1.coordin.h"
// // #include "test.h"
// int main()
// {
//     using namespace std;
//     rect rplace;
//     polar pplace;
//     cout << "Enter the x and y value";
//     while (cin >> rplace.x >> rplace.y)
//     {
//         pplace = rect_to_polar(rplace);
//         show_polar(pplace);
//         cout << "Next two number(q to quit)";
//     }
//     return 0;
// }
// polar rect_to_polar(rect xypos){
//     using namespace std;
//     polar answer;
//     answer.distance = sqrt(xypos.x * xypos.x + xypos.y *xypos.y);
//     answer.angle = atan2(xypos.x,xypos.y);
//     return answer;
// }
 
// void show_polar(polar dapos){
//     using namespace std;
//     const double Rad_to_deg = 57.29577951;
//     cout << "distance = " <<dapos.distance;
//     cout << ",angle = " <<dapos.angle * Rad_to_deg;
//     cout << "degree\n";
// }
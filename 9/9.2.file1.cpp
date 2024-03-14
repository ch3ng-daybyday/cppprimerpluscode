    #include <iostream>
    #include "9.1.coordin.h"
    // #include "9.3.file2.cpp"
     using namespace std;
    int main()
    {
        rect rplace;
        polar pplace;
        cout << "Enter the x and y values";
        while (cin >> rplace.x >> rplace.y)
        {
            pplace = rect_to_polar(rplace);
            show_polar(pplace);
            cout << "Next two numbers (q to quit)";
        }
        cout << "Bye.";
        return 0;
    }
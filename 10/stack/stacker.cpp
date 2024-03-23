#include <iostream>
#include "stack.h"

int main()
{
    using namespace std;
    Stack st;
    char ch;
    unsigned long po;
    cout << "pls enter A to add a purchase order.\n"
         << "p to process a po,or q to quit.\n"
         << "s to show result\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
        {
            continue;
        }
        if (!isalpha(ch))
        {
            cout << "\a";
            continue;
        }
        switch (ch)
        {
        case 'A':
        case 'a':
            cout << "enter a po number to add\t";
            cin >> po;
            if (st.isfull())
                cout << "stack already full\n";
            else
                st.push(po);
            break;
        case 'p':
        case 'P':
            if (st.isempty())
            {
                cout << "stack is empty \n";
            }
            else
            {
                // cin >> po;
                st.pop(po);
                cout << "#po" << po << "popped\n";
            }
            break;
        case 's':
            st.show();
        }
        system("cls");
        cout << "pls enter A to add a purchase order.\n"
             << "p to process a po,or q to quit.\n"
             << "s to show result\n";
    }
    cout << "Bye\n";
    return 0;
}
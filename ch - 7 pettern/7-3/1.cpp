#include <iostream>
using namespace std;
main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        if (i == 1 || i == 4)
            cout << "* * * *" << endl;
        else
        {
            cout << "*     *" << endl;
        }
    }
}
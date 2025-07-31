#include <iostream>
using namespace std;
main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; i <= 5; j++)
            if (i == 1 || i == 3 || j == 1 || j == 5)
                cout << " * ";
            else
            {
                cout << " ";
            }
        cout << endl;
    }
}
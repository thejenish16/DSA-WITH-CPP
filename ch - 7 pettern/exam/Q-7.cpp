#include <iostream>
using namespace std;

main()
{
    int i, j, s;
    for (i = 1; i <= 8; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j == 1 || (i == 1 && j <= 4) ||
                (i == 4 && j <= 4) ||
                (i == 2 && j == 5) ||
                (i == 3 && j == 5))
            {
                cout << "p ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
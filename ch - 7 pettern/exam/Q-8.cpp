#include <iostream>
using namespace std;

main()
{
    int i, j, s;
    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if ((i == 1 && j >= 2 && j <= 5) ||
                (i == 2 && j == 1) ||
                (i == 3 && j == 1) ||
                (i == 4 && (j == 1 || j >= 4)) ||
                (i == 5 && (j == 1 || j == 6)) ||
                (i == 6 && j >= 2 && j <= 5))
            {
                cout << "# ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
#include <iostream>
using namespace std;

main()
{
    int j, i, s;
    for (i = 1; i <= 5; i++)
    {
        for (int s = 5; s > i; s--)
        {
            cout << "  ";
        }
        for (j = i; j >= 1; j--)
        {
            cout << "*" << " ";
        }

        for (j = 2; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (i = 4; i >= 1; i--)
    {
        for (s = 5; s > i; s--)
        {
            cout << "  ";
        }
        for (j = i; j >= 1; j--)
        {
            cout << "*" << " ";
        }

        for (j = 2; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
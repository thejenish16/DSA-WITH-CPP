#include <iostream>
using namespace std;
main()
{
    int j, i;
    for (i = 1; i <= 4; i++)
    {
        for (j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
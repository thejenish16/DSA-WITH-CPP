#include <iostream>
using namespace std;
main()
{
    int j, i;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
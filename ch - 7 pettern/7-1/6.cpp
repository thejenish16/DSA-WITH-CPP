#include <iostream>
using namespace std;
main()
{
    int j, i;
    for (i = 10; i <= 15; i++)
    {
        for (j = 10; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
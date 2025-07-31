#include <iostream>
using namespace std;
main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j >= i; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

// 5
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1
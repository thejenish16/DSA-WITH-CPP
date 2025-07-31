// 1 1 1 2 1 3
// 2 1 2 2 2 3
// 3 1 3 2 3 3
// 4 1 4 2 4 3
// 5 1 5 2 5 3
#include <iostream>
using namespace std;
main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 3; j <= 4; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
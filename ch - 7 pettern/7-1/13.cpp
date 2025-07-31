#include <iostream>
using namespace std;
main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= 5; j++)
        {
            if (j % 2 == 0)
            {
                cout << j << " ";
            }
            else
            {
                char ch = j + 64;
                cout << ch << " ";
            }
        }
        cout << endl;
    }
}

#include <iostream>
using namespace std;
main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j >= i; j--)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                {
                    char ch = j + 64;
                    cout << ch << " ";
                }
                else
                {
                    cout << j * 10 << " ";
                }
            }
            else
            {
                char ch = j + 64;
                cout << ch << "  ";
            }
        }
        cout << endl;
    }
}
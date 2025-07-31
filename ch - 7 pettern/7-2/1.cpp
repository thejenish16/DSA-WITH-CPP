#include <iostream>
using namespace std;
main()
{
    
    for (int i = 1; i <= 5; i++)
    {
        for (int s = 1; s < i; s++)
        {
            cout << " ";
        }
        for (int j = i; j <= 5; j++)
        {
            if (i % 2 == 0)
            {
                cout << j;
            }
            else
            {
                if (j % 2 == 0)
                {
                    cout << "0";
                }
                else
                {
                    cout << "1";
                }
            }
        }
        cout << endl;
    }
}
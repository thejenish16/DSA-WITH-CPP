#include <iostream>
using namespace std;

main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i * 2; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i * 2; j++)
            cout << "*";
        cout << endl;
    }
}

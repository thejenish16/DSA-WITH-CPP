#include <iostream>
using namespace std;

main()
{
    int n, i = 1, x = 1, y = 1, z;
    cout << "enter number : ";
    cin >> n;

    while (i <= n)
    {
        cout << x << " ";
        z = x + y;
        y++;
        x = z;
        i++;
    }
}
#include <iostream>
using namespace std;

main()
{
    int n;

    cout << "Entar any number :";
    cin >> n;

    if (n % 2 == 0)
    {
        n--;
    }

    while (n >= 1)
    {
        cout << n << " ";
        n -= 2;
    }
}
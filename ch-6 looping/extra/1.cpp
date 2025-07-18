#include <iostream>
using namespace std;

main()
{
    int n, rev = 0, rem, ori;
    cin >> n;
    ori = n;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (ori == rev)
        cout << "Palindrom";
    else
        cout << "not Palindrom";
}
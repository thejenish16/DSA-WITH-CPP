#include <iostream>
using namespace std;

main()
{
    int n, rev = 0, rem, original;
    cin >> n;
    original = n;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if (original == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}

#include <iostream>
using namespace std;

main()
{
    int n, abc, sum = 0;

    cout << "Enter any number: ";
    cin >> n;

    while (n > 9)
    {
        sum = 0;

        int aem = n;
        while (aem > 0)
        {
            abc = aem % 10;
            sum = sum + abc;
            aem = aem / 10;
        }

        n = sum;
    }

    cout << "final " << n;
}

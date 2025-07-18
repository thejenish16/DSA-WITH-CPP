#include <iostream>
using namespace std;

main()
{
    int num, aem, n, sum = 0, c = 0;
    cout << "Enter a number: ";
    cin >> num;

    aem = num;
    while (aem > 0)
    {
        c++;
        aem = aem / 10;
    }

    aem = num;
    while (aem > 0)
    {
        int d = aem % 10;
        int p = 1;
        for (int i = 0; i < c; i++)
            p *= d;
        sum += p;
        c--;
        aem = aem / 10;
    }

    if (sum == num)
        cout << num << " a disarium number.";
    else
        cout << num << " not a disarium number.";
}

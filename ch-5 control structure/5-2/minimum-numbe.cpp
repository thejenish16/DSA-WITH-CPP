#include <iostream>
using namespace std;

main()
{
    int a, b, c;

    cout << "Entar A :";
    cin >> a;
    cout << "Entar B :";
    cin >> b;
    cout << "Entar C :";
    cin >> c;

    if (a == b && a == c && b == c)
    {
        cout << endl
             << "All are Equal....";
    }
    else if (a == b || a == c || b == c)

    {
        cout << endl
             << "Both Are Equal.....";
    }

    else
    {
        if (a < b)
        {
            if (a < c)
            {
                cout << endl
                     << "A is Min......";
            }
            else
            {
                cout << endl
                     << "C is Min.......";
            }
        }
        else
        {
            if (b < c)
            {
                cout << endl
                     << "B is Min........";
            }
            else
            {
                cout << endl
                     << "C is Min........";
            }
        }
    }
}
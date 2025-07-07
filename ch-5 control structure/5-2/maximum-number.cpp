#include <iostream>
using namespace std;

main()
{
    int a, b, c, d;

    cout << endl
         << "Entar A :";
    cin >> a;
    cout << endl
         << "Entar B :";
    cin >> b;
    cout << endl
         << "Entar C :";
    cin >> c;
    cout << endl
         << "Entar D :";
    cin >> d;

    if (a == b && a == c && a == d && b == d && b == c && d == c)
    {
        cout << endl
             << "All Are Same......!";
    }
    else if (a == b || a == c || a == d || b == d || b == c || d == c)
    {
        cout << endl
             << "Both Are Same......!";
    }
    else
    {
        if (a > b)
        {
            if (a > c)
            {
                if (a > d)
                {
                    cout << endl
                         << "A is Max.....!";
                }
                else
                {
                    cout << endl
                         << "D is Max.....!";
                }
            }
            else
            {
                if (c > d)
                {
                    cout << endl
                         << "C is Max....!";
                }
                else
                {
                    cout << endl
                         << "D is Max....!";
                }
            }
        }
        else
        {
            if (b > c)
            {
                if (b > d)
                {
                    cout << endl
                         << "B is Max....!";
                }
                else
                {
                    cout << endl
                         << "D is Max....!";
                }
            }
            else
            {
                if (c > d)
                {
                    cout << endl
                         << "C is Max.....";
                }
                else
                {
                    cout << endl
                         << "D is Max.....";
                }
            }
        }
    }
}
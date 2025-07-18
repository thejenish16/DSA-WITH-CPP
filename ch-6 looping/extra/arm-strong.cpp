#include <iostream>
using namespace std;
main()
{
    int n, last = 0, res = 0;
    cout << "Enter any Number := ";
    cin >> n;
    int check = n;
    while (n != 0)
    {
        last = n % 10;
        int num = last * last * last;
        res = res + num;
        n /= 10;
    }
    if (check == res)
    {
        cout << res << " is Arm Strong Number";
    }
    else
    {
        cout << res << " is not Arm Strong Number";
    }
}
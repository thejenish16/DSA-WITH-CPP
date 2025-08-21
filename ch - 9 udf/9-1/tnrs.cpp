#include <iostream>
using namespace std;

int aditione()
{
    int a, b;

    cout << "Entar Frist Numbear";
    cin >> a;

    cout << "Entar Second Numear";
    cin >> b;

    return a + b;
}

main()
{
    int ans = aditione();
    cout << ans;
}
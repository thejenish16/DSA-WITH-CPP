#include <iostream>
using namespace std;

main()
{
    int a, b, c;
    cout << "Entar A Number : ";
    cin >> a;
    cout << "Entar B Number : ";
    cin >> b;
    cout << "Entar C Number : ";
    cin >> c;

    (a > b)
        ? (a > c) ? cout << "A Is Max...." : cout << "C Is Max..."
    : (b > c) ? cout << "B Is Max...."
              : cout << "C Is Max.....";
}
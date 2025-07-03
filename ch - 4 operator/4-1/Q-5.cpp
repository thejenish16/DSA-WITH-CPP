,#include<iostream>
using namespace std;

main()
{
    float x, y, result;
    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of y: ";
    cin >> y;

    result = (x + y) * (x + y) * (x + y);

    cout << "The result of (x + y)^3 is: " << result;
}

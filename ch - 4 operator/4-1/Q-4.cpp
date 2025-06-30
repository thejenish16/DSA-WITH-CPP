#include<iostream>
using namespace std;

main()
{
    float x , y , result;
    cout << "Entar the value of x: ";
    cin >> x;

    cout << "Entar the value of y: ";
    cin >> y;

    result = (x - y) * (x - y);

    cout << "The result of (x - y)^2  is: " << result << endl;
}
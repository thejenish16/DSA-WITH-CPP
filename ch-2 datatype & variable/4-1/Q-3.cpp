#include <iostream>
using namespace std;

int main() 
{
    double x, y, result;

    cout << "Enter the value of x: ";
    cin >> x;
    
    cout << "Enter the value of y: ";
    cin >> y;

    result = (x + y) * (x + y);

    cout << "The result of (x + y)^2 is: " << result << endl;
}
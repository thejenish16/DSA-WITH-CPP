#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    while (a <= b)
    {

        if (a % 4 == 0)

            cout << a << endl;

        a++;
    }
}
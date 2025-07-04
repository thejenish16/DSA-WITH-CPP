#include <iostream>
using namespace std;

main()
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    if (num1 > num2)
    {
        cout << "Maximum number is: " << num1 << endl;
    }

    if (num2 > num1)
    {
        cout << "Maximum number is: " << num2 << endl;
    }

    if (num1 == num2)
    {
        cout << "Both numbers are equal." << endl;
    }
}

#include <iostream>
using namespace std;

main()
{
    cout << "DataType , Constant & Variable." << endl;

    // int myInt = 20 , yourInt = 30;
    // cout << "Sum" << myInt << "+" << yourInt << "=" << myInt + yourInt << endl;

    int a = 12, b = 6;
    cout << "Addition of " << a << "and" << b << "is" << a + b << endl;
    cout << "Subtraction of " << a << "and" << b << "is" << a - b << endl;
    cout << "Multiplication of " << a << "and" << b << "is" << a * b << endl;
    cout << "Division of " << a << "and" << b << "is" << a / b << endl;
    cout << "Modulo of " << a << "and" << b << "is" << a % b << endl;

    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    cout << a << " % " << b << " = " << a % b << endl
         << endl;
}
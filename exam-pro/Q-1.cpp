#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }
int mod(int a, int b) { return a % b; }

int main()
{
    int choice;
    int num1, num2;

    do
    {
        cout << endl
             << "Calculator HERE!!!!!!!!"
             << endl;
        cout << "1: + : addition\n";
        cout << "2: - : subtraction\n";
        cout << "3: * : multiplication\n";
        cout << "4: / : division\n";
        cout << "5: % : modulo\n";
        cout << "6: Q : quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "total result = " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "total result = " << sub(num1, num2) << endl;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "total result = " << mul(num1, num2) << endl;
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 == 0)
                cout << "Error: Division by zero!" << endl;
            else
                cout << "total result = " << divide(num1, num2) << endl;
            break;
        case 5:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 == 0)
                cout << "Error: Modulo by zero!" << endl;
            else
                cout << "total result = " << mod(num1, num2) << endl;
            break;
        case 6:
            cout << "you are exited..!!!!!!!";
            return 0;
        default:
            cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 0);
    return 0;
}

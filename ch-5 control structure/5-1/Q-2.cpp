#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter any number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "This number is Negative" << num << endl;
    }

    if (num == 0)
    {
        cout << "This number is Neutral" << num << endl;
    }

    if (num > 0)
    {
        cout << "This number is Positive" << num << endl;
    }
}

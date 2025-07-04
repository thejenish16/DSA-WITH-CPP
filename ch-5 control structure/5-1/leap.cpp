#include <iostream>
using namespace std;

main()
{
    int year;
    cout << "Enter Your Year";
    cin >> year;

    if (year % 4 == 0)
    {
        cout << "Leap Year" << endl;
    }
    else
    {
        cout << "Not A Leap Year";
    }
}
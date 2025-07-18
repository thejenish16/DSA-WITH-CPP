#include <iostream>
using namespace std;

main()
{
    int number;
    cout << "Enter any number: ";
    cin >> number;

    int aem = number % 10;
    int frist = number;

    while (frist >= 10)
    {
        frist = frist / 10;
    }

    int sum = frist + aem;

    cout << "The sum of the first and the last digit: " << sum << endl;
}

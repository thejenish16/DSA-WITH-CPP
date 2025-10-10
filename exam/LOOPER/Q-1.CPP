#include <iostream>
using namespace std;

main()
{
    int num;
    cout << "Entar Your Even - Odd Num";
    cin >> num;

    if ((num / 2) * 2 == num)
    {
        cout << num << "Is Even";
    }
    else
    {
        cout << num << "Is Odd";
    }
}
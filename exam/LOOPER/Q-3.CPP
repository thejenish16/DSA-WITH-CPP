#include <iostream>
using namespace std;

int main()
{
    int unit;
    float bill, sur, total;

    cout << "Enter electricity units: ";
    cin >> unit;

    if (unit <= 50)
    {
        bill = unit * 0.50;
    }

    else if (unit <= 150)
    {
        bill = (50 * 0.50) + (unit - 50) * 0.75;
    }
    else if (unit <= 250)
    {
        bill = (50 * 0.50) + (100 * 0.75) + (unit - 150) * 1.20;
    }
    else
    {
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + (unit - 250) * 1.50;
    }

    sur = bill * 0.20;
    total = bill + sur;

    cout << "total bill = rs  :" << total << endl;
}

#include <iostream>
using namespace std;
main()
{
    int n, last, sum = 0, mul = 1;
    cout << "Enter the Number :=  ";
    cin >> n;
    int check = n;
    while (n != 0)
    {
        last = n % 10;
        sum = sum + last;
        mul = mul * last;
        n /= 10;
    }
    if (sum == mul)
    {
        cout << check << " is Magic Number";
    }
    else
    {
        cout << check << " is not Magic Number";
    }
}
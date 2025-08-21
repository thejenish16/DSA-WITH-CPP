#include <iostream>
using namespace std;

int fact(int n)
{
    return (n <= 1) ? 1 : n * fact(n - 1);
}

int main()
{
    int n;
    cout << "Entar Any Number :";
    cin >> n;

    int facto = fact(n);
    cout << "Your Factorial IS: " << facto << endl;
    return 0;
}
#include <iostream>
#include "Stack.cpp"
using namespace std;

int main()
{
    int num;
    cout << "Enter Any Number : ";
    cin >> num;

    Stack s1(100);

    while (num != 0)
    {
        int rem = num % 2;
        s1.push(rem);
        num = num / 2;
    }
    s1.display();
}
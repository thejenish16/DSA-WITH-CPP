#include<iostream>
using namespace std;

main()
{
    float p,r,n;
    cout << "Enter the Principal Amout :=\t";
    cin >> p;
    cout << endl<<"Enter the Interest Rate :=\t";
    cin >> r;
    cout << endl<<"Enter the Months :=\t";
    cin >> n;
    cout <<endl<<endl;
    cout << "Your Simple Intrest is :=\t" << (p*r*n)/100;
}
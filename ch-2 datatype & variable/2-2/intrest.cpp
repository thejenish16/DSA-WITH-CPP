#include<iostream>
using namespace std;
main()
{
    float p,r,n;
    cout <<"Entar The Principal Amount :\t";
    cin >> p;

    cout << endl<<endl<<"Entar The Intrest Rate :\t";
    cin >> r;

    cout << endl<<endl<<"Entar The Month :\t";
    cin >> n;

    cout << endl<<endl<<endl;
    cout << "Your Simple Intrest Is :\t" << (p*r*n)/100 << "\trepees";
}
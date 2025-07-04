#include <iostream>
using namespace std;

main()
{
    float marks;
    cout << "Entar You Mark :";
    cin >> marks;

    if (marks >= 100 && marks <= 91)
    {
        cout << endl
             << "Your Gread A1";
    }
    else if (marks >= 81 && marks <= 90)
    {
        cout << endl
             << "your Gread A2";
    }
    else if (marks >= 71 && marks <= 80)
    {
        cout << endl
             << "your Gread B1";
    }
    else if (marks >= 61 && marks <= 70)
    {
        cout << endl
             << "your Gread B2";
    }
    else if (marks >= 51 && marks <= 60)
    {
        cout << endl
             << "your Gread C1";
    }
    else if (marks >= 41 && marks <= 50)
    {
        cout << endl
             << "your Gread C2";
    }
    else if (marks >= 33 && marks <= 40)
    {
        cout << endl
             << "your Gread D";
    }
    else if (marks >= 0 && marks <= 32)
    {
        cout << endl
             << "You Fail Bro...........!!";
    }
    else
    {
        cout << endl
             << "Invalid Number !!!!!!! Only (0 To 100)";
    }
}
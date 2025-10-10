#include <iostream>
using namespace std;

int main()
{
    int marks;
    char grade;

    cout << "Enter Marks: ";
    cin >> marks;

    if (marks < 0 || marks > 100)
    {
        cout << "Invalid Marks Entered!" << endl;
    }

    if (marks >= 91)
        grade = 'A';
    else if (marks >= 81)
        grade = 'B';
    else if (marks >= 71)
        grade = 'C';
    else if (marks >= 61)
        grade = 'D';
    else if (marks >= 51)
        grade = 'E';
    else if (marks >= 33)
        grade = 'F';
    else
        grade = 'G';

    cout << "\nGrade = " << grade << endl;

    switch (grade)
    {
    case 'A':
        cout << "Excellent work!" << endl;
        break;
    case 'B':
        cout << "Well done." << endl;
        break;
    case 'C':
        cout << "Good job." << endl;
        break;
    case 'D':
        cout << "You Passed, but you could do better." << endl;
        break;
    case 'F':
        cout << "You are just passed." << endl;
        break;
    case 'E':
        cout << "Sorry, you failed." << endl;
        break;
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        cout << "Congratulations! You are eligible for the next level." << endl;
    }
    else if (grade == 'E' || grade == 'G')
    {
        cout << "Please try again next time." << endl;
    }
}

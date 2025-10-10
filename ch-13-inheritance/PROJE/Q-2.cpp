#include <iostream>
using namespace std;

class Start
{
protected:
    int n, x1, x2, x3;

public:
    Start()
    {
        cout << "Square Finder" << endl;
        cout << "Enter number: ";
        cin >> n;
    }
};

class MySquare : public Start
{
public:
    void printSquare()
    {
        int sq = n * n;
        cout << "Square of " << n << " = " << sq << endl
             << endl;
    }
};

class MyCube : public MySquare
{
public:
    void inputValues()
    {
        cout << "Cube Finder" << endl;
        cout << "Enter value 1: ";
        cin >> x1;
        cout << "Enter value 2: ";
        cin >> x2;
        cout << "Enter value 3: ";
        cin >> x3;
    }

    void printCube()
    {
        int result = (x1 * x1 * x1) + (x2 * x2 * x2) + (x3 * x3 * x3);
        cout << "Sum of cubes = " << result << endl;
    }
};

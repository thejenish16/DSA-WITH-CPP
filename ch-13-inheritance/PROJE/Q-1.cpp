#include <iostream>
using namespace std;

class size
{
protected:
    int he, we;

public:
    // constractor
    size()
    {
        cout << "Enter Height : ";
        cin >> he;
        cout << "Enter Width : ";
        cin >> we;
    }
};

class triangle : public size
{
public:
    void getTringle()
    {
        float area = 0.5 * he * we;
        cout << endl
             << "The Area Of Triangle : " << area << endl;
    }
};
class Rectangle : public size
{
public:
    void getRectangle()
    {
        float area = he * we;
        cout << endl
             << "The Area Of Rectangle : " << area << endl;
    }
};
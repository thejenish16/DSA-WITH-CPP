#include <iostream>
using namespace std;

class X
{
protected:
    int a, b, c;
};

class Y : public X
{
public:
    void setData(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    int getData()
    {
        return (a * a * a) + (b * b * b) + (c * c * c);
    }
    void showNumbers()
    {
        cout << "First number: " << a << endl;
        cout << "Second number: " << b << endl;
        cout << "Third number: " << c << endl;
    }
};

#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    void inputvalue()
    {
        cout << "Enter a Number : ";
        cin >> value;
    }

    void displaymax() const
    {
        cout << "\nMaximum Number is :::::> " << value << endl;
    }

    Number operator>(const Number &aem)
    {
        Number temp;
        if (this->value > aem.value)
            temp.value = this->value;
        else
            temp.value = aem.value;

        return temp;
    }
};

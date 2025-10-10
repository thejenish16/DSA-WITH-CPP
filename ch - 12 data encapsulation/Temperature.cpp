#include <iostream>
using namespace std;

class P
{
protected:
    float temperature;
};

class Q : public P
{
protected:
    float fahrenheit;

public:
    void toFahrenheit(float c)
    {
        temperature = c;
        fahrenheit = (c * 9.0 / 5.0) + 32.0;
        cout << "Fahrenheit: " << fahrenheit << endl;
    }
};

class R : public Q
{
public:
    void toKelvin()
    {
        float kelvin = (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
        cout << "Kelvin: " << kelvin << endl;
    }
};

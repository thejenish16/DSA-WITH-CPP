#include "Temperature.cpp"

int main()
{
    R obj;
    float c;
    cout << "Enter temperature in Celsius: ";
    cin >> c;

    obj.toFahrenheit(c);
    obj.toKelvin();

    return 0;
}

#include <iostream>
using namespace std;

class Car
{
public:
    int car_id;
    char car_company_name[20];
    char car_color[20];
    char car_model[20];
    char car_release_year[20];
};

int main()
{
    Car car1, car2, car3, car4;

    cout << "Entar Input.......1" << endl
         << endl;

    cout << "Entar Car id :";
    cin >> car1.car_id;
    cout << "Entar company name :";
    cin >> car1.car_company_name;
    cout << "Entar color :";
    cin >> car1.car_color;
    cout << "Entar model :";
    cin >> car1.car_model;
    cout << "Entar release year :";
    cin >> car1.car_release_year;

    cout << "Entar Input.......2" << endl
         << endl;

    cout << "Entar Car id :";
    cin >> car2.car_id;
    cout << "Entar company name :";
    cin >> car2.car_company_name;
    cout << "Entar color :";
    cin >> car2.car_color;
    cout << "Entar model :";
    cin >> car2.car_model;
    cout << "Entar release year :";
    cin >> car2.car_release_year;

    cout << "Entar Input.......3" << endl
         << endl;

    cout << "Entar Car id :";
    cin >> car3.car_id;
    cout << "Entar company name :";
    cin >> car3.car_company_name;
    cout << "Entar color :";
    cin >> car3.car_color;
    cout << "Entar model :";
    cin >> car3.car_model;
    cout << "Entar release year :";
    cin >> car3.car_release_year;

    cout << "Entar Input.......4" << endl
         << endl;

    cout << "Entar Car id :";
    cin >> car4.car_id;
    cout << "Entar company name :";
    cin >> car4.car_company_name;
    cout << "Entar color :";
    cin >> car4.car_color;
    cout << "Entar model :";
    cin >> car4.car_model;
    cout << "Entar release year :";
    cin >> car4.car_release_year;

    cout << endl
         << endl
         << "Entar output......." << endl
         << endl;

    // output

    cout << "car Id : " << car1.car_id << endl;
    cout << "car name : " << car1.car_company_name << endl;
    cout << "car color : " << car1.car_color << endl;
    cout << "car model : " << car1.car_model << endl;
    cout << "car release year : " << car1.car_release_year << endl;

    cout << endl
         << endl
         << "Entar output......." << endl
         << endl;

    cout << "car Id : " << car2.car_id << endl;
    cout << "car name : " << car2.car_company_name << endl;
    cout << "car color : " << car2.car_color << endl;
    cout << "car model : " << car2.car_model << endl;
    cout << "car release year : " << car2.car_release_year << endl;

    cout << endl
         << endl
         << "Entar output......." << endl
         << endl;

    cout << "car Id : " << car3.car_id << endl;
    cout << "car name : " << car3.car_company_name << endl;
    cout << "car color : " << car3.car_color << endl;
    cout << "car model : " << car3.car_model << endl;
    cout << "car release year : " << car3.car_release_year << endl;

    cout << endl
         << endl
         << "Entar output......." << endl
         << endl;

    cout << "car Id : " << car4.car_id << endl;
    cout << "car name : " << car4.car_company_name << endl;
    cout << "car color : " << car4.car_color << endl;
    cout << "car model : " << car4.car_model << endl;
    cout << "car release year : " << car4.car_release_year << endl;

    cout << endl
         << endl
         << "Entar output......." << endl
         << endl;
}
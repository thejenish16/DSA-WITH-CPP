#include <iostream>
using namespace std;

int main()
{
    int langChoice, serviceChoice;

    cout << "1 dabaiye English ke liye" << endl;
    cout << "2 dabaiye Hindi ke liye" << endl;
    cout << "3 dabaiye Gujarati ke liye" << endl;
    cout << "Apna chayan dabaiye: ";
    cin >> langChoice;

    switch (langChoice)
    {
    case 1:
        cout << "\n1 dabaiye Internet Recharge ke liye" << endl;
        cout << "2 dabaiye Top-up Recharge ke liye" << endl;
        cout << "3 dabaiye Special Recharge ke liye" << endl;
        cout << "Apna chayan dabaiye: ";
        cin >> serviceChoice;

        switch (serviceChoice)
        {
        case 1:
            cout << "Internet Recharge successful ho gaya." << endl;
            break;
        case 2:
            cout << "Top-up Recharge successful ho gaya." << endl;
            break;
        case 3:
            cout << "Special Recharge successful ho gaya." << endl;
            break;
        default:
            cout << "Galat option dabaya." << endl;
        }
        break;

    case 2:
        cout << "\nInternet Recharge ke liye 1 dabaiye" << endl;
        cout << "Top-up Recharge ke liye 2 dabaiye" << endl;
        cout << "Special Recharge ke liye 3 dabaiye" << endl;
        cout << "Apna chayan dabaiye: ";
        cin >> serviceChoice;

        switch (serviceChoice)
        {
        case 1:
            cout << "Internet Recharge ho gaya." << endl;
            break;
        case 2:
            cout << "Top-up Recharge ho gaya." << endl;
            break;
        case 3:
            cout << "Special Recharge ho gaya." << endl;
            break;
        default:
            cout << "Galat number dabaya." << endl;
        }
        break;

    case 3:
        cout << "\nInternet Recharge mate 1 dabavo" << endl;
        cout << "Top-up Recharge mate 2 dabavo" << endl;
        cout << "Special Recharge mate 3 dabavo" << endl;
        cout << "Tamaru chayan karo: ";
        cin >> serviceChoice;

        switch (serviceChoice)
        {
        case 1:
            cout << "Internet Recharge thai gayu." << endl;
            break;
        case 2:
            cout << "Top-up Recharge thai gayu." << endl;
            break;
        case 3:
            cout << "Special Recharge thai gayu." << endl;
            break;
        default:
            cout << "Khoto number dabavyo." << endl;
        }
        break;

    default:
        cout << "Galat3 chuni gayi." << endl;
    }
}

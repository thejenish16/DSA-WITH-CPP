#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter Array Size : ";
    cin >> size;
    int array[size];

    cout
        << endl
        << "1d Array Input" << endl
        << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Any Number of array : " << "[" << i << "] : ";
        cin >> array[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (array[i] < 0)
        {
            cout << array[i] << endl;
        }
    }
}
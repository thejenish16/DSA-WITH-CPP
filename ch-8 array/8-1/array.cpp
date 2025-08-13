#include <iostream>
using namespace std;
main()
{
    int array[6] = {10, 20, 30, 40, 50};
    array[5] = 100;
    // int array[5];
    // array[0] = 10;
    // array[1] = 20;
    // array[2] = 30;
    // array[3] = 40;
    // array[4] = 50;

    // cout << array[0];

    for (int i = 0; i <= 5; i++)
    {
        cout << array[i] << endl;
    }
}
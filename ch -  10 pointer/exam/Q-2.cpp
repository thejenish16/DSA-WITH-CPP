#include <iostream>
using namespace std;

int cubess(int *cube)
{
    return (*cube) * (*cube) * (*cube);
}

int main()
{
    int index;
    cout << "Enter array index: ";
    cin >> index;

    int array[10][10];

    cout << "Enter array of elements :";
    for (int i = 0; i < index; i++)
    {
        for (int j = 0; j < index; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> *(*(array + i) + j);
        }
    }

    cout << "cubess of all elements :" << endl;
    for (int i = 0; i < index; i++)
    {
        for (int j = 0; j < index; j++)
        {
            cout << cubess(&array[i][j]) << "  ";
        }
        cout << endl;
    }

    return 0;
}
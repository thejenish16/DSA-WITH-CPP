#include <iostream>
using namespace std;

main()
{
    int row, col;
    cout << "Enter Row Size : ";
    cin >> row;
    cout << "Enter Column Size : ";
    cin >> col;

    int arr[10][10], trans[10][10];

    cout << endl
         << "2D Array Input" << endl
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element [" << i << "][" << j << "] : ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            trans[j][i] = arr[i][j];
        }
    }

    cout << endl
         << "Transpose of the Matrix is :" << endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
}

#include <iostream>
using namespace std;

main()
{
    int rows, col;

    cout << "Enter the array's row size: ";
    cin >> rows;
    cout << "Enter the array's column size: ";
    cin >> col;

    int a[rows][col];
    int largest = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the value of a[" << i << "][" << j << "] := ";
            cin >> a[i][j];
        }
    }

    cout << "Enter array's elements:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = i; k < rows; k++)
            {
                for (int l = j; l < col; l++)
                {
                    if (a[i][j] > a[k][l])
                    {
                        largest = a[i][j];
                    }
                }
            }
        }
    }

    cout << "\nThe largest element is: " << largest << endl;
}

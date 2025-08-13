#include <iostream>
using namespace std;
main()
{
    int row, col, rownum, colnum, sumro = 0, sumCol = 0;

    cout << "Enter the no. Rows := ";
    cin >> row;
    cout << "Enter the no. Columns := ";
    cin >> col;

    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the value of a[" << i << "][" << j << "] := ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    cout << endl
         << endl
         << "Enter the number of row you went to sum := ";
    cin >> rownum;
    cout << endl
         << endl
         << "Enter the number of column you went to sum := ";
    cin >> colnum;

    // sum
    cout << endl
         << endl
         << "Element of row " << rownum << " := \n";
    for (int i = rownum; i <= rownum; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << "\t";
            sumro += a[i][j];
        }
    }
    cout << endl
         << endl
         << "Sum of Row " << rownum << " is := " << sumro;

    cout << endl
         << endl
         << "Element of column " << colnum << " := \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = colnum; j <= colnum; j++)
        {
            cout << a[i][j] << "\t";
            sumCol += a[i][j];
        }
    }
    cout << endl
         << endl
         << "Sum of Column " << colnum << " is := " << sumCol;
}
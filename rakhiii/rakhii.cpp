#include <iostream>
using namespace std;

main()
{
    int size = 41;
    int pos = size / 2;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {

            if (i == pos && (j < 7 || j > size - 8))
            {
                if ((i + j) % 2 == 0)
                    cout << "=";
                else
                    cout << "+";
            }

            else if ((i == 5 || i == size - 6) && (j >= 8 && j <= size - 9))
            {
                cout << "*";
            }
            else if ((j == 5 || j == size - 6) && (i >= 8 && i <= size - 9))
            {
                cout << "*";
            }

            else if ((i == pos - 5 || i == pos + 5) && (j >= pos - 5 && j <= pos + 5))
            {
                cout << "o";
            }
            else if ((j == pos - 5 || j == pos + 5) && (i >= pos - 5 && i <= pos + 5))
            {
                cout << "o";
            }

            else if ((i == pos || j == pos) && (i >= pos - 3 && i <= pos + 3 && j >= pos - 3 && j <= pos + 3))
            {
                cout << "+";
            }

            else if ((i == pos - 2 || i == pos + 2) && (j >= pos - 2 && j <= pos + 2))
            {
                cout << "#";
            }
            else if ((j == pos - 2 || j == pos + 2) && (i >= pos - 2 && i <= pos + 2))
            {
                cout << "#";
            }

            else if (i == pos && j == pos)
            {
                cout << "@";
            }

            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

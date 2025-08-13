#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Entar Number Of Element:";
    cin >> size;

    int a[size];
    cout << "Array Input" << endl;

    for (int i = 0; i <= size; i++)
    {
        cout << "Entar A [" << i << "]:";
        cin >> a[i];
    }
    // cout << system("cls");
    cout << "CRUD Operation" << endl
         << endl;

    int n;
    do
    {
        cout << endl
             << "Press 1 For Insert" << endl;
        cout << "Press 2 For Puspsh" << endl;
        cout << "Press 3 For Fetch" << endl;
        cout << "Press 4 For Update" << endl;
        cout << "Press 5 For Delete" << endl;
        cout << "Press 6 For Pop" << endl;
        cout << "Press 0 For Exit" << endl;
        cin >> n;

        switch (n)
        {
        case 1:
            system("cls");
            cout << "insert" << endl
                 << endl;
            int pos, element;

            cout << "Entar Your Index:";
            cin >> pos;

            cout << "Entar New Element:";
            cin >> element;

            if (pos < size && pos >= 0)
            {
                for (int i = size - 1; i >= pos; i--)
                {
                    a[i + 1] = a[i];
                }
                a[pos] = element;
                size++;
            }
            break;
        case 2:
            system("cls");
            cout << "Puspsh" << endl
                 << endl;
            cout << " Entar Element:";
            cin >> element;
            a[size] = element;
            size++;
            break;
        case 3:
            system("cls");
            cout << "Fetch" << endl
                 << endl;
            for (int i = 0; i < size; i++)
            {
                cout << a[i] << "\t";
            }
            break;
        case 4:
            system("cls");
            cout << "Update" << endl
                 << endl;
            cout << "Entar Your Index:";
            cin >> pos;
            cout << "Entar Element";
            cin >> element;

            if (pos < size && pos >= 0)
            {
                a[pos] = element;
            }
            break;
        case 5:
            system("cls");
            cout << "Delete" << endl
                 << endl;
            cout << "Entar Your Index:";
            cin >> pos;

            if (pos < size && pos >= 0)
            {
                for (int i = pos; i < size; i++)
                {
                    a[i] = a[i + 1];
                }
                size--;
            }
            break;
        case 6:
            system("cls");  
            cout << "Pop" << endl
                 << endl;
            size--;
            break;
        case 0:
            system("cls");
            cout << "Exit";
            break;
        }

    } while (n != 0);
}
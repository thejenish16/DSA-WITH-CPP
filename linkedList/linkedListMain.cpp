#include "linkedList.cpp"
using namespace std;

int main()
{
    List list;
    int ch, val;

    do
    {
        cout << "\nLinked List Menu\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Search Element\n";
        cout << "3. Delete Element\n";
        cout << "4. Reverse List\n";
        cout << "5. Display List\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter value to insert: ";
            cin >> val;
            list.addStart(val);
            break;

        case 2:
            cout << "Enter value to search: ";
            cin >> val;
            list.findValue(val);
            break;

        case 3:
            cout << "Enter value to delete: ";
            cin >> val;
            list.removeValue(val);
            break;

        case 4:
            list.reverseList();
            cout << "List reversed successfully.\n";
            break;

        case 5:
            list.showList();
            break;

        case 0:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice, try again.\n";
        }

    } while (ch != 0);

    return 0;
}

#include "Student_Calculate.cpp"
#include <string.h>
using namespace std;

int main()
{
    Student<int> s1;
    int choice, id;
    char name[40];

    do
    {
        cout << "\nPress (1) Add Student" << endl;
        cout << "Press (2) Display All Students" << endl;
        cout << "Press (3) Remove a Student by ID" << endl;
        cout << "Press (4) Search a Student by ID" << endl;
        cout << "Press (5) Exit" << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Student Id : ";
            cin >> id;
            cin.ignore();
            cout << "Enter Student Name : ";
            cin.getline(name, 40);
            s1.AddStudentData(id, name);
            cout << "Student Added Successfully!" << endl
                 << endl;
            break;

        case 2:
            s1.getStudentData();
            break;

        case 3:
            cout << "Enter Student ID to remove: ";
            cin >> id;
            s1.RemoveStudentData(id);
            break;

        case 4:
            cout << "Enter Student ID to search: ";
            cin >> id;
            s1.SearchStudentData(id);
            break;

        case 5:
            cout << "Exiting... Goodbye!" << endl;
            break;

        default:
            cout << "Invalid Choice! Please try again." << endl;
            break;
        }
    } while (choice != 5);

    return 0;
}

#include "stack-exam.cpp"
int main()
{
    int size, choice, element;
    Stack stack(size);
    cout << "Enter size of stack: ";
    cin >> size;

    do
    {
        cout << "Press 1 to push element in stack" << endl;
        cout << "Press 2 to pop element from stack" << endl;
        cout << "Press 3 to Display size of stack" << endl;
        cout << "Press 4 to check if stack is empty" << endl;
        cout << "Press 5 to Is Full" << endl;
        cout << "Press 0 to exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << endl;

            cout << "Enter element to push: ";
            cin >> element;
            stack.push(element);
            cout << endl;
            break;

        case 2:
            cout << endl;
            stack.pop();
            cout << endl;
            break;

        case 3:
            cout << endl;
            stack.display();
            cout << endl;
            break;

        case 4:
            cout << endl;
            stack.isEmpty();
            cout << endl;
            break;

        case 5:
            cout << endl;
            stack.isFull();
            cout << endl;
            break;

        case 0:
            cout << endl;
            cout << "Exiting..." << endl;
            cout << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
            break;
        }
    } while (choice != 0);
    return 0;
};
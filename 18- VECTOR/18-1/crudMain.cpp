#include "Curd.cpp"

int main()
{
    collection c1;
    int choice, element, index;
    do
    {
        cout << "Entar 1 For Insert :" << endl;
        cout << "Entar 2 For Display :" << endl;
        cout << "Entar 3 For Update :" << endl;
        cout << "Entar 4 For Delete :" << endl;
        cout << "Entar 5 For Exit :" << endl
             << endl;

        cout << "Enatr Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Entar Any Element : ";
            cin >> element;
            c1.addDataElement(element);
            cout << "Element " << element << " Are Adddedd....!!!!!!" << endl
                 << endl;
            break;

        case 2:
            c1.displyDataElement();
            cout << endl
                 << endl;
            break;

        case 3:
            cout << "Entar Valuee.....!!!! : ";
            cout << "Entar Index : ";
            cin >> index;
            cout << "Enatr Element :";
            cin >> element;
            c1.updateDataElement(index, element);
            cout << endl
                 << "update Successfully.... !!!!!!!" << endl;
            break;

        case 4:
            cout << "Delete Value..... :" << endl;
            cout << "Enatr Index : ";
            cin >> index;
            c1.deleteDataElement(index);
            cout << endl
                 << "Delete  Successfully...... !!!!!!" << endl;
            break;

        case 5:
            cout << "You Are Exiteddddd........" << endl;
            break;

        default:
            cout << "Invalid Choice.......!!!!!" << endl;
            break;
        }
    } while (choice != 5);

    return 0;
};
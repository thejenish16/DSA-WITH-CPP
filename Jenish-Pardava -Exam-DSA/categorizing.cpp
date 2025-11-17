#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }

    void insertEnd(int x)
    {
        Node *NewNode = new Node(x);
        if (head == NULL)
        {
            head = NewNode;
        }
        else
        {
            Node *t = head;
            while (t->next != NULL)
            {
                t = t->next;
            }
            t->next = NewNode;
        }
    }

    void insertStart(int x)
    {
        Node *NewNode = new Node(x);
        NewNode->next = head;
        head = NewNode;
    }

    void deleteValue(int x)
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        if (head->data == x)
        {
            head = head->next;
            cout << "Deleted" << endl;
            return;
        }
        Node *ptr = head;
        while (ptr->next != NULL && ptr->next->data != x)
        {
            ptr = ptr->next;
        }
        if (ptr->next == NULL)
        {
            cout << "Value not found" << endl;
        }
        else
        {
            ptr->next = ptr->next->next;
            cout << "Deleted" << endl;
        }
    }

    void display()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        Node *ptr = head;
        cout << "Linked List: ";
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
};

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}

void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int a[n1], b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[m + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            i++;
        }
        else
        {
            arr[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int binarySearch(int arr[], int n, int key)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    LinkedList list;
    int choice;

    do
    {
        cout << endl;
        cout << "DSA WITH CPP PROJECT MENU" << endl;
        cout << "1. Insert at End" << endl;
        cout << "2. Insert at Start" << endl;
        cout << "3. Delete a Value" << endl;
        cout << "4. Display Linked List" << endl;
        cout << "5. Bubble Sort" << endl;
        cout << "6. Merge Sort" << endl;
        cout << "7. Binary Search" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int data;
            cout << "Enter value: ";
            cin >> data;
            list.insertEnd(data);
            break;
        }

        case 2:
        {
            int data;
            cout << "Enter value: ";
            cin >> data;
            list.insertStart(data);
            break;
        }

        case 3:
        {
            int data;
            cout << "Enter value to delete: ";
            cin >> data;
            list.deleteValue(data);
            break;
        }

        case 4:
        {
            list.display();
            break;
        }

        case 5:
        {
            int n;
            cout << "Enter size: ";
            cin >> n;
            int arr[n];
            cout << "Enter elements: ";
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            bubbleSort(arr, n);
            cout << "Bubble Sorted: ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        }

        case 6:
        {
            int n;
            cout << "Enter size: ";
            cin >> n;
            int arr[n];
            cout << "Enter elements: ";
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            mergeSort(arr, 0, n - 1);
            cout << "Merge Sorted: ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        }

        case 7:
        {
            int n, key;
            cout << "Enter size (sorted array): ";
            cin >> n;
            int arr[n];
            cout << "Enter sorted elements: ";
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            cout << "Enter value to search: ";
            cin >> key;
            int pos = binarySearch(arr, n, key);
            if (pos == -1)
            {
                cout << "Not found" << endl;
            }
            else
            {
                cout << "Found at index: " << pos << endl;
            }
            break;
        }

        case 8:
        {
            cout << "Exit..." << endl;
            return 0;
        }

        default:
        {
            cout << "Invalid" << endl;
        }
        }
    } while (choice != 0);

    return 0;
}

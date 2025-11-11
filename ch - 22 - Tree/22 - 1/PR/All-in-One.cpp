#include <iostream>
using namespace std;

class algorithms
{
public:
    void sort(int arr[], int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int minIndex = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[minIndex])
                    minIndex = j;
            }
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    void merge(int arr[], int left, int mid, int right)
    {
        int n1 = mid - left + 1;
        int n2 = right - mid;
        int L[n1], R[n2];
        for (int i = 0; i < n1; i++)
            L[i] = arr[left + i];
        for (int j = 0; j < n2; j++)
            R[j] = arr[mid + 1 + j];

        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2)
        {
            if (L[i] <= R[j])
                arr[k++] = L[i++];
            else
                arr[k++] = R[j++];
        }

        while (i < n1)
            arr[k++] = L[i++];
        while (j < n2)
            arr[k++] = R[j++];
    }

    void mergeSort(int arr[], int left, int right)
    {
        if (left < right)
        {
            int mid = (left + right) / 2;
            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);
            merge(arr, left, mid, right);
        }
    }

    int linearSearch(int arr[], int n, int key)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == key)
                return i;
        }
        return -1;
    }

    int binarySearch(int arr[], int n, int key)
    {
        int low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] == key)
                return mid;
            else if (arr[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }

    void display(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    algorithms algo;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int choice;
    do
    {
        cout << "\nMENU\n";
        cout << "1. Selection Sort\n";
        cout << "2. Merge Sort\n";
        cout << "3. Linear Search\n";
        cout << "4. Binary Search\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            algo.sort(arr, n);
            cout << "Array after Selection Sort: ";
            algo.display(arr, n);
            break;

        case 2:
            algo.mergeSort(arr, 0, n - 1);
            cout << "Array after Merge Sort: ";
            algo.display(arr, n);
            break;

        case 3:
        {
            int key;
            cout << "Enter element to search: ";
            cin >> key;
            int index = algo.linearSearch(arr, n, key);
            if (index != -1)
                cout << "Element found at position " << index + 1 << endl;
            else
                cout << "Element not found.\n";
            break;
        }

        case 4:
        {
            int key;
            cout << "Enter element to search: ";
            cin >> key;
            int index = algo.binarySearch(arr, n, key);
            if (index != -1)
                cout << "Element found at position " << index + 1 << endl;
            else
                cout << "Element not found.\n";
            break;
        }

        case 5:
            cout << "Program ended.\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 5);

    return 0;
}

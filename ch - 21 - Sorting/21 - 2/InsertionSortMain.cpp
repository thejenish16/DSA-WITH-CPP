#include "InsertionSort.cpp"
int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];

    cout << "Array Input" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element Of " << "[" << i << "] : ";
        cin >> arr[i];
    }

    cout << endl
         << "Array Output : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    insertionSort(arr, size);

    cout << endl
         << "Sorted Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

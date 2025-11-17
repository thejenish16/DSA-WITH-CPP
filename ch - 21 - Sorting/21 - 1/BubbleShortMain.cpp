#include "BubbleShort.cpp"
int main()
{
    int size;

    cout << "Enter Size : ";
    cin >> size;
    int a[size];

    cout << endl
         << "Array Input" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << "[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl
         << "OutPut Is There : ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    Shorting(a, size);
    cout << endl
         << endl
         << "Bubbling Assending Sorted : ";
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}
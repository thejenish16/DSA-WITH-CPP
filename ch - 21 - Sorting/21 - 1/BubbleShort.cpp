#include <iostream>
using namespace std;

void Shorting(int a[], int size)
{
    for (int pass = 1; pass <= size - 1; pass++)
    {
        for (int i = 0; i < size; i++)
        {
            if (a[i] > a[i + 1])
            {
                int swap = a[i];
                a[i] = a[i + 1];
                a[i + 1] = swap;
            }
        }
    }
}

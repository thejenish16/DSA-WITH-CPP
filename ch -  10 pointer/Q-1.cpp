// Write a Program to find the length of a string using a Pointer.

#include <iostream>
#include <string>
using namespace std;

main()
{
    char name[200];
    char *ptr;
    int lengthn = 0;

    cout << "Entar Anyyy Numbere :: ";
    gets(name);

    ptr = name;
    for (int i = 0; *ptr != '\0'; i++)
    {
        lengthn++;
        ptr++;
    }

    cout << endl
         << "Your Lengh Off Name :" << lengthn;
}
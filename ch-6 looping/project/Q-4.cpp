#include <iostream>
using namespace std;

main()
{
    char aem, end;
    cout << "enter aem char: ";
    cin >> aem;
    cout << "enter end char: ";
    cin >> end;

    cout << "Characters from " << aem << " to " << end << ": ";

    char n = aem;
    do
    {
        cout << n << " ";
        n++;
    } while (n <= end);
}

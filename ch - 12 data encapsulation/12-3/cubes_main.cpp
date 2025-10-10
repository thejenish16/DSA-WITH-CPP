#include "cubes.cpp"

int main()
{
    Y obj;
    int n1, n2, n3;

    cout << "Enter first number: ";
    cin >> n1;

    cout << "Enter second number: ";
    cin >> n2;

    cout << "Enter third number: ";
    cin >> n3;

    obj.setData(n1, n2, n3);

    cout << endl;
    obj.showNumbers();
    cout << "Sum of cubes: " << obj.getData() << endl;

    return 0;
}

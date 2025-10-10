#include <iostream>
#include <vector>
using namespace std;

class collection
{
private:
    vector<int> v;

public:
    void addDataElement(int element)
    {
        v.push_back(element);
    }
    void displyDataElement()
    {
        cout << "Displaying Data!!!!!!" << endl;
        for (int element : v)
        {
            cout << element << "\t" << endl;
        }
    }
    void updateDataElement(int index, int element)
    {
        if (index >= 0 && index < v.size())
        {
            v[index] = element;
        }
        else
        {
            cout << "Invelid Choice!!!!!" << endl;
        }
    }
    void deleteDataElement(int index)
    {
        if (index >= 0 && index < v.size())
        {
            v.erase(v.begin() + index);
        }
        else
        {
            cout << "Invalid Choice......!!!!!!!!" << endl;
        }
    }
};
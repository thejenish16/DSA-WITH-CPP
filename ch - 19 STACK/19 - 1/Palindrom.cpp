#include <iostream>
#include <string.h>
#define Max 100
using namespace std;

class Stack
{
    char *arr;
    int size, top;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new char[size];
        this->top = -1;
    }
    ~Stack()
    {
        cout << endl;
        delete[] arr;
        cout << endl;
    }

    void Push(int Element)
    {
        if (top == size - 1)
        {
            cout << "Stack Is Overflow..." << endl;
        }
        else
        {
            top++;
            this->arr[this->top] = Element;
        }
    }

    char Pop()
    {
        cout << endl;
        if (top == -1)
        {
            cout << endl
                 << "Stack Is UnderFlow..." << endl;
            return ' ';
        }
        else
        {
            return arr[top--];
        }
        cout << endl;
    }

    void Display()
    {
        if (top == -1)
        {
            cout << endl
                 << "Stack Is Empty.." << endl;
        }
        else
        {
            // cout << endl;
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            // cout << endl;
        }
    }

    void IsEmpty()
    {
        cout << endl;
        if (top == -1)
        {
            cout << endl
                 << "Turu.." << endl;
        }
        else
        {
            cout << endl
                 << "False.." << endl;
        }
        cout << endl;
    }

    void IsFull()
    {
        cout << endl;
        if (top == size - 1)
        {
            cout << endl
                 << "Turu.." << endl;
        }
        else
        {
            cout << endl
                 << "False.." << endl;
        }
        cout << endl;
    }
    bool isPalindrom(string str)
    {
        for (char ch : str)
            Push(ch);

        for (char ch : str)
        {
            if (ch != Pop())
                return false;
        }
        return true;
    }
};

int main()
{
    Stack s1(Max);
    string str;

    cout << "Enter Any String : ";
    cin >> str;

    Stack stack(Max);

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
    }

    cout << "String : " << str << endl;
    if (stack.isPalindrom(str))
        cout << "String Is Polimdron .........................";
    else
        cout << "String Is Not Polimdrom......................";
}
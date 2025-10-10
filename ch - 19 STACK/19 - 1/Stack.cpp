#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int size, top, length;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
        this->length = 0;
    }
    ~Stack()
    {
        delete[] arr;
    }
    void push(int element)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            arr[++top] = element;
            length++;
            cout << element << " pushed to stack" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            cout << arr[top--] << " popped from stack" << endl;
            length--;
        }
    }
    void peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Top element is: " << arr[top] << endl;
        }
    }
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Stack elements are: ";
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    void isEmpty()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Stack is not empty" << endl;
        }
    }
    void isFull()
    {
        if (top == size - 1)
        {
            cout << "Stack is full" << endl;
        }
        else
        {
            cout << "Stack is not full" << endl;
        }
    }
    void length_of_stack()
    {
        cout << "Length of stack is: " << length << endl;
    }
};
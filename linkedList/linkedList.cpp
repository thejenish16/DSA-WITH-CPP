#include <iostream>
using namespace std;

class NodeItem
{
public:
    int value;
    NodeItem *next;

    NodeItem(int v)
    {
        value = v;
        next = NULL;
    }
};

class List
{
private:
    NodeItem *head;

public:
    List()
    {
        head = NULL;
    }

    void addStart(int val)
    {
        NodeItem *newNode = new NodeItem(val);
        newNode->next = head;
        head = newNode;
        cout << val << " inserted at beginning.\n";
    }

    void findValue(int key)
    {
        NodeItem *temp = head;
        int pos = 1;
        bool found = false;

        while (temp != NULL)
        {
            if (temp->value == key)
            {
                cout << "Element " << key << " found at position " << pos << ".\n";
                found = true;
                break;
            }
            temp = temp->next;
            pos++;
        }

        if (!found)
            cout << "Element not found in list.\n";
    }

    void removeValue(int key)
    {
        if (head == NULL)
        {
            cout << "List is empty.\n";
            return;
        }

        if (head->value == key)
        {
            NodeItem *del = head;
            head = head->next;
            delete del;
            cout << key << " deleted from list.\n";
            return;
        }

        NodeItem *prev = NULL;
        NodeItem *curr = head;

        while (curr != NULL && curr->value != key)
        {
            prev = curr;
            curr = curr->next;
        }

        if (curr == NULL)
        {
            cout << "Element not found.\n";
            return;
        }

        prev->next = curr->next;
        delete curr;
        cout << key << " deleted successfully.\n";
    }

    void reverseList()
    {
        NodeItem *prev = NULL;
        NodeItem *curr = head;
        NodeItem *nextNode = NULL;

        while (curr != NULL)
        {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        head = prev;
    }

    void showList()
    {
        if (head == NULL)
        {
            cout << "List is empty.\n";
            return;
        }

        NodeItem *ptr = head;
        cout << "List elements: ";
        while (ptr != NULL)
        {
            cout << ptr->value << " ";
            ptr = ptr->next;
        }
        cout << "\n";
    }
};

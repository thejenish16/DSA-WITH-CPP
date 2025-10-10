#include <iostream>
using namespace std;

class linkedlist
{
    struct node
    {
        int data;
        node *next;
        node(int v)
        {
            data = v;
            next = NULL;
        }
    };
    node *head;

public:
    linkedlist()
    {
        head = NULL;
    }

    void addEnd(int v)
    {
        node *n = new node(v);
        if (head == NULL)
        {
            head = n;
            return;
        }
        node *t = head;
        while (t->next != NULL)
            t = t->next;
        t->next = n;
    }

    void insert_at_beginning(int v)
    {
        node *n = new node(v);
        n->next = head;
        head = n;
    }

    bool Search(int k)
    {
        node *t = head;
        while (t != NULL)
        {
            if (t->data == k)
            {
                cout << k << " found\n";
                return true;
            }
            t = t->next;
        }
        cout << k << " not found\n";
        return false;
    }

    void Delete_node(int k)
    {
        if (head == NULL)
            return;
        if (head->data == k)
        {
            node *d = head;
            head = head->next;
            delete d;
            cout << k << " deleted\n";
            return;
        }
        node *t = head;
        while (t->next != NULL && t->next->data != k)
            t = t->next;
        if (t->next == NULL)
        {
            cout << k << " not in list\n";
            return;
        }
        node *d = t->next;
        t->next = t->next->next;
        delete d;
        cout << k << " deleted\n";
    }

    void reverse()
    {
        node *p = NULL;
        node *c = head;
        node *n = NULL;
        while (c != NULL)
        {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        head = p;
        cout << "List reversed\n";
    }

    void show()
    {
        if (head == NULL)
        {
            cout << "Empty list\n";
            return;
        }
        node *t = head;
        while (t != NULL)
        {
            cout << this->data << " -> ";
            t = t->next;
        }
        cout << "NULL\n";
    }
};

int main()
{
    linkedlist l;
    int ch, val;
    do
    {
        cout << "\n1. Add End\n2. Insert at Beginning\n3. Search\n4. Delete Node\n5. Reverse\n6. Show\n0. Exit\nChoice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            l.addEnd(val);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> val;
            l.insert_at_beginning(val);
            break;
        case 3:
            cout << "Enter value: ";
            cin >> val;
            l.Search(val);
            break;
        case 4:
            cout << "Enter value: ";
            cin >> val;
            l.Delete_node(val);
            break;
        case 5:
            l.reverse();
            break;
        case 6:
            l.show();
            break;
        case 0:
            cout << "Exit\n";
            break;
        default:
            cout << "Invalid choice\n";
        }
    } while (ch != 0);

    return 0;
}

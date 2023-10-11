#include <bits/stdc++.h>
using namespace std;

struct compass {
    int Pen;
    compass * next;
};

class LinkedList
{
public:
    compass* head = NULL;

    void addAtLast (int Pen)
    {
        compass* newnode = new compass();
        newnode->Pen = Pen;
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;

        } else

        {
            compass* temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }

    void addAtFront (int Pen)
    {
        compass* newnode = new compass();
        newnode->Pen = Pen;
        newnode->next = NULL;

        newnode->next = head;
        head = newnode;
    }

    void printLinkedList ()
    {
        compass* temp = head;

        while (temp != NULL)
        {
            cout<<temp->Pen<<" ";
            temp = temp->next;
        }
    }
};

int main()
{
    LinkedList list;

    list.addAtLast (2);
    list.addAtLast (3);
    list.addAtLast (4);
    list.addAtFront (1);
    list.addAtLast (5);
    list.addAtLast (6);

    list.printLinkedList();
}
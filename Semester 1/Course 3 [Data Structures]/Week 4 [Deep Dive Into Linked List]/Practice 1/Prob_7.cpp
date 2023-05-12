#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

class LinkedList
{
public:
    Node* head;
    Node* sorted;
    int sz;

    LinkedList()
    {
        head = NULL;
        sz = 0;
    }

    Node* CreateNewNode(int value)
    {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }

    void InsertAtTail(int value)
    {
        sz++;
        Node* a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = a;
    }

    void InsertionSort()
    {
        sorted = NULL;
        Node* current = head;
        while(current != NULL)
        {
            Node* temp = current->next;
            sortedInsert(current);
            current = temp;
        }
        head = sorted;
    }

    void sortedInsert(Node* newNode)
    {
        /* Special case for the head end */
        if (sorted == NULL || sorted->data >= newNode->data)
        {
            newNode->next = sorted;
            sorted = newNode;
        }
        else
        {
            Node* current = sorted;
            /* Locate the node before the point of insertion
             */
            while (current->next != NULL
                    && current->next->data < newNode->data)
            {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
    }

    void Traverse()
    {
        Node* a = head;
        while(a != NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<"\n";
    }
};

int main()
{
    LinkedList l;

    l.InsertAtTail(4);
    l.InsertAtTail(2);
    l.InsertAtTail(5);
    l.InsertAtTail(1);
    l.InsertAtTail(3);

    l.Traverse();

    l.InsertionSort();
    l.Traverse();

    return 0;
}

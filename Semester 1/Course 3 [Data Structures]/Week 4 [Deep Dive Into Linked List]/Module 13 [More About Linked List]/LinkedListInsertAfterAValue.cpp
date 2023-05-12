#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

class LinkedList{
public:
    Node* head;
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
        /// Insert At Tail
        Node* temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = a;
        /// Insert At Head
//        a->next = head;
//        head = a;
    }

    void InsertAfterValue(int value, int data)
    {
        Node* a = head;
        while(a != NULL)
        {
            if(a->data == value)
            {
                break;
            }
            a = a->next;
        }

        if(a == NULL)
        {
            cout<<value<<" doesn't exist in Linked-List.\n";
            return;
        }
        sz++;
        Node* newNode = CreateNewNode(data);
        newNode->next = a->next;
        a->next = newNode;
    }

    int getSize()
    {
        return sz;
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

    l.InsertAtTail(10);
    l.InsertAtTail(20);
    l.InsertAtTail(30);
    l.InsertAtTail(40);

    cout<<l.getSize()<<"\n";
    l.Traverse();

    l.InsertAfterValue(20, 25);
    l.Traverse();
    cout<<l.getSize()<<"\n";

    return 0;
}

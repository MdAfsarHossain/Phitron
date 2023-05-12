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

    void CheckValue(int value)
    {
        Node* a = head;
        while(a != NULL)
        {
            if(a->data == value)
            {
                cout<<"True";
                cout<<"\n";
                return;
            }
            a = a->next;
        }

        if(a == NULL)
        {
            cout<<"False\n";
            return;
        }
        sz++;
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


    l.InsertAtTail(1);
    l.InsertAtTail(2);
    l.InsertAtTail(3);
    l.InsertAtTail(4);
    l.InsertAtTail(5);

    l.Traverse();
    l.CheckValue(3);


    return 0;
}


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

    void InsertAtHead(int value)
    {
        sz++;
        Node* a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        a->next = head;
        head = a;
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

    l.InsertAtHead(5);
    l.InsertAtHead(4);
    l.InsertAtHead(3);
    l.InsertAtHead(2);
    l.InsertAtHead(1);
//    l.Traverse();

    l.InsertAtHead(0);
    l.Traverse();

    return 0;
}


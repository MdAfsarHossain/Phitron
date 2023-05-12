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

    void InsertAtHead(int value)
    {
        sz++;
        Node* a= CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        a->next = head;
        head = a;
    }

    void InsertAtAnyIndex(int index, int value)
    {
        if(index<0 || index>sz)
        {
            cout<<"Invalid Index!\n";
            return;
        }
        if(index == 0)
        {
            InsertAtHead(value);
            return;
        }
        sz++;
        Node* a= head;
        int cur_index = 0;
        while(cur_index != index-1)
        {
            a = a->next;
            cur_index++;
        }
        Node* newNode = CreateNewNode(value);
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
    l.InsertAtHead(10);  ///Index = 4
    l.InsertAtHead(20);  ///Index = 3
    l.InsertAtHead(40);  ///Index = 2
    l.InsertAtHead(50);  ///Index = 1
    l.InsertAtHead(60);  ///Index = 0

    l.Traverse();
    cout<<l.getSize()<<"\n";

    l.InsertAtAnyIndex(3, 30);
    l.Traverse();
    cout<<l.getSize()<<"\n";

    return 0;
}

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
        Node* a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }

        a->next = head;
        head = a;
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

    int getSize()
    {
        ///Time Complexity: O(1)
        return sz;
        ///Time Complexity: O(n)
//        int sz = 0;
//        Node* a = head;
//        while(a != NULL)
//        {
//            sz++;
//            a = a->next;
//        }
//
//        return sz;
    }
};

int main()
{
    LinkedList l;

//    l.Traverse();
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(10);
//    cout<<l.getSize()<<"\n";
    l.InsertAtHead(20);
//    cout<<l.getSize()<<"\n";
    l.InsertAtHead(30);
//    cout<<l.getSize()<<"\n";

    l.InsertAtHead(40);
    l.Traverse();
    cout<<l.getSize()<<"\n";


    return 0;
}

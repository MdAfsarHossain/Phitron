#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;
};

class DoublyLinkedList{
public:
    Node* head;
    int sz;

    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    Node* CreateNewNode(int data)
    {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        return newNode;
    }

    void InsertAtHead(int data)
    {
        sz++;
        Node* newNode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newNode;
            return;
        }
        Node* a = head;
        newNode->next = a;
        a->prev = newNode;
        head = newNode;
    }

    void Insert(int index, int data)
    {
        if(index > sz)
        {
            return;
        }
        if(index == 0)
        {
            InsertAtHead(data);
            return;
        }
        Node* a = head;
        int cur_index = 0;
        while(cur_index != index)
        {
            a = a->next;
            cur_index++;
        }

        Node* newNode = CreateNewNode(data);
        newNode->next = a->next;
        newNode->prev = a;

        Node* b = a->next;
        b->prev = newNode;
        a->next = newNode;
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
    DoublyLinkedList dl;

    dl.InsertAtHead(10);
    dl.InsertAtHead(20);
    dl.InsertAtHead(30);
    dl.InsertAtHead(40);
    dl.InsertAtHead(50);

    dl.Traverse();

//    dl.Insert(0, 60);
//    dl.Traverse();
    dl.Insert(3, 25);
    dl.Traverse();


    return 0;
}

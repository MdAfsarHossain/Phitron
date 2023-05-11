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

    void Delete(int index)
    {
        if(index >= sz)
        {
            cout<<index<<" doesn't exist.\n";
            return;
        }
        Node* a = head;
        int cur_index = 0;
        while(cur_index != index)
        {
            a = a->next;
            cur_index++;
        }
        Node* b = a->prev;
        Node* c = a->next;
        if(b != NULL)
        {
            b->next = c;
        }
        if(c != NULL)
        {
            c->prev = b;
        }
        delete a;
        if(index == 0)
        {
            head = c;
        }
        sz--;
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
        return sz;
    }
};


int main()
{
    DoublyLinkedList dl;

    dl.InsertAtHead(10);
    dl.InsertAtHead(20);
    dl.InsertAtHead(30);
    dl.InsertAtHead(35);
    dl.InsertAtHead(40);
    dl.InsertAtHead(50);

    dl.Traverse();
    dl.Delete(2);
    dl.Traverse();
    cout<<dl.getSize()<<"\n";

    return 0;
}

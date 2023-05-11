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

    void Reverse()
    {
        if(head == NULL)
        {
            return;
        }
        Node* a = head;
        int cur_index = 0;
        while(cur_index != sz-1)
        {
            a = a->next;
            cur_index++;
        }

        Node* b = head;
        while(b != NULL)
        {
            swap(b->next, b->prev);
            b = b->prev;
        }
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
    dl.Reverse();
    dl.Traverse();

    return 0;
}

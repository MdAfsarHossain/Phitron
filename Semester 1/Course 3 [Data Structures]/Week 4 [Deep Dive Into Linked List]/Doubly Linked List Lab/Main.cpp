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

    ///Create a new node with the given data and returns it O(1)
    Node* CreateNewNode(int data)
    {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        return newNode;
    }

    ///Inserts a node with given data at head O(1)
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

    ///Inserts the given data at the given index O(n)
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

    ///Delete the given index O(n)
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

    ///Reverse the doubly linked list O(n)
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
        ///Last index is in

        Node* b = head;
        while(b != NULL)
        {
            swap(b->next, b->prev);
            b = b->prev;
        }
        head = a;
    }

    ///Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }

    ///Print the linked list O(n)
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

    dl.Traverse();
//    cout<<dl.getSize()<<"\n";

    dl.Insert(2, 15);
    dl.Traverse();
//    cout<<dl.getSize()<<"\n";

    dl.Delete(3);
    dl.Traverse();

    dl.Reverse();
    dl.Traverse();

    return 0;
}

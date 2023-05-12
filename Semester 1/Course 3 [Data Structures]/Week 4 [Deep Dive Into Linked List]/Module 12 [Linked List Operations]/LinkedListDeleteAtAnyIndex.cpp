#include<bits/stdc++.h>
using namespace std;

class Node
{
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

        Node* temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = a;
    }

    void DeleteAtHead()
    {
        if(head == NULL)
        {
            cout<<"Link List is Empty!!\n";
            return;
        }
        sz--;
        Node* a = head;
        head = a->next;
        delete a;
    }

    void DeleteAtAnyIndex(int index)
    {
        if(index<0 || index>sz-1)
        {
            cout<<"Invalid Index!!";
            return;
        }
        if(index == 0)
        {
            DeleteAtHead();
            return;
        }
        sz--;
        Node* a = head;
        int cur_index;
        while(cur_index != index-1)
        {
            a = a->next;
            cur_index++;
        }
        Node* b = a->next;
        a->next = b->next;
        delete b;
    }

    int getSize()
    {
        return sz;
    }

    void Traverse()
    {
        Node* a = head;
        while(a!=NULL)
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
    l.InsertAtTail(25);
    l.InsertAtTail(30);
    l.InsertAtTail(40);
    l.InsertAtTail(50);

    l.Traverse();
    cout<<l.getSize()<<"\n";

    l.DeleteAtAnyIndex(2);
    l.Traverse();
    cout<<l.getSize()<<"\n";

    return 0;
}

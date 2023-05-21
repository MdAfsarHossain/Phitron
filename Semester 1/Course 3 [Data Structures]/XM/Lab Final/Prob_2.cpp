#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* nxt;
    Node* prv;
};

class LinkedList
{
public:
    Node* head;
    Node* tail;
    int sz;

    LinkedList()
    {
        head = NULL;
        sz = 0;
    }

    Node* CreateNewNode(int value)
    {
        Node* newNode = new Node;
        newNode->value = value;
        newNode->nxt = NULL;
        newNode->prv = NULL;
        return newNode;
    }

    void insertHead(int value)
    {
        sz++;
        Node* newNode = CreateNewNode(value);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        Node* a = head;
        newNode->nxt = a;
        a->prv = newNode;
        head = newNode;
    }

    void insertTail(int value)
    {
        sz++;
        Node* newNode = CreateNewNode(value);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->prv = tail;
            tail->nxt = newNode;
            tail = newNode;
        }
    }

    void insertMid(int value)
    {
        if(sz == 0)
        {
            insertHead(value);
            return;
        }
        int mid = (sz / 2)-1;
        Node* a = head;
        int cur_index = 0;
        while(cur_index != mid)
        {
            a = a->nxt;
            cur_index++;
        }
        Node* newNode = CreateNewNode(value);
        newNode->nxt = a->nxt;
        newNode->prv = a;

        Node* b = a->nxt;
        b->prv = newNode;
        a->nxt = newNode;
        sz++;
    }

//    void print()
//    {
//        Node* a = head;
//        while(a != NULL)
//        {
//            cout<<a->value<<" ";
//            a = a->nxt;
//        }
//        cout<<"\n";
//    }
};

int main()
{
    LinkedList a;

    a.insertHead(1);
    a.insertTail(5);
    a.insertMid(3);
    a.insertHead(0);
    a.insertTail(10);
//    a.print(); // prints 0 1 3 5 10
    return 0;
}

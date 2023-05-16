#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

class Queue{
public:
    Node* head;
    Node* tail;
    int sz;

    Queue()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    Node* CreateNode(int value)
    {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }

    void enqueue(int value)
    {
        sz++;
        Node* newNode = CreateNode(value);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    void dequeue()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty!\n";
            return;
        }
        if(sz == 1)
        {
            delete head;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        Node* a = head;
        head = head->next;
        sz--;
        delete a;
    }

    int front()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty!\n";
            return -1;
        }
        return head->data;
    }

    int size()
    {
        return sz;
    }
};

int main()
{
    Queue q;

    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);

    cout<<"Q size: "<<q.size()<<"\n";
    cout<<q.front()<<"\n";

    q.dequeue();
    cout<<q.front()<<"\n";

    q.dequeue();
    cout<<q.front()<<"\n";

    q.dequeue();
    cout<<"Q size: "<<q.size()<<"\n";

    return 0;
}

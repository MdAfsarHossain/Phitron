#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data)
    {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

class DEQUE
{
public:
    Node* head;
    Node* tail;
    int sz;

    DEQUE()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    void PUSH_BACK(int val)
    {
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            sz++;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        sz++;
    }

    void POP_BACK()
    {
        if(sz == 0)
        {
            cout<<"DEQUE is empty!\n";
            return;
        }
        if(head == tail)
        {
            Node* tmp = head;
            head = NULL;
            tail = NULL;
            delete tmp;
            sz--;
            return;
        }

        Node* delNode = tail;
        tail = delNode->prev;
        delete delNode;
        sz--;
    }

    int GET_SIZE()
    {
        return sz;
    }
};

int main()
{
    DEQUE dq;

    dq.PUSH_BACK(10);
    dq.PUSH_BACK(20);
    dq.PUSH_BACK(30);
    dq.PUSH_BACK(40);
    dq.PUSH_BACK(50);

    cout<<dq.GET_SIZE()<<"\n";
    dq.POP_BACK();
    dq.POP_BACK();
    cout<<dq.GET_SIZE()<<"\n";

    return 0;
}

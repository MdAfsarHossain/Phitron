#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;
};

class Stack{
public:
    Node* head;
    Node* top;
    int sz;

    Stack()
    {
        head = NULL;
        top = NULL;
        sz = 0;
    }

    Node* CreateNewNode(int val)
    {
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = NULL;
        newNode->prev = NULL;
        return newNode;
    }

    void PUSH(int val)
    {
        sz++;
        Node* newNode = CreateNewNode(val);
        if(head == NULL)
        {
            head = newNode;
            top = newNode;
            return;
        }
        top->next = newNode;
        newNode->prev = top;
        top = newNode;
    }

    void POP()
    {
        Node* delNode = top;
        if(top == head)
        {
            head = NULL;
            top = NULL;
        }
        else
        {
            top = delNode->prev;
            top->next = NULL;
        }
        delete delNode;
        sz--;
    }

    int SIZE()
    {
        return sz;
    }

    int TOP()
    {
        return top->data;
    }

    bool EMPTY()
    {
        if(sz == 0) return true;
        return false;
    }
};

int main()
{
    Stack numst;
    numst.PUSH(10);
    numst.PUSH(20);
    numst.PUSH(30);
    numst.PUSH(40);
    numst.PUSH(50);

    cout<<"Size: "<<numst.SIZE()<<"\n";

    while(numst.EMPTY() == false)
    {
        cout<<numst.TOP()<<" ";
        numst.POP();
    }
    cout<<"\nSize: "<<numst.SIZE()<<"\n";

    return 0;
}

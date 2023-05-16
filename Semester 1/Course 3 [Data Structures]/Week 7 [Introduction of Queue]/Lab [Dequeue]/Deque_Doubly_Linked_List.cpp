#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;
};

class Deque{
public:
    Node* head;
    Node* tail;
    int sz;

    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    Node* CreateNewNode(int value)
    {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;
        newNode->prev = NULL;
        return newNode;
    }

    ///Pushback O(1)
    void push_back(int value)
    {
        Node* newNode = CreateNewNode(value);
        if(sz == 0)
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

    ///PushFront O(1)
    void push_front(int value)
    {
        Node* newNode = CreateNewNode(value);
        if(sz == 0)
        {
            head = newNode;
            tail = newNode;
            sz++;
            return;
        }
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
        sz++;
    }

    ///Pop back O(1)
    void pop_back()
    {
        if(sz == 0)
        {
            cout<<"Deque is empty!\n";
            return;
        }
        if(sz == 1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            return;
        }
        Node* a = tail;
        tail = tail->prev;
        delete a;
        tail->next = NULL;
    }

    ///Pop front O(1)
    void pop_front()
    {
        if(sz == 0)
        {
            cout<<"Deque is empty!\n";
            return;
        }
        if(sz == 1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }

        Node* a = head;
        head = head->next;
        delete a;
        head->prev = NULL;
        sz--;
    }

    ///Front O(1)
    int front()
    {
        if(sz == 0)
        {
            cout<<"Dequq is empty!\n";
            return -1;
        }
        return head->data;
    }

    ///back O(1)
    int back()
    {
        if(sz == 0)
        {
            cout<<"Deque is empty!\n";
            return -1;
        }
        return tail->data;
    }
};

int main()
{
    Deque d;
    d.push_back(5);
    d.push_back(10);
    d.push_back(15);

    cout<<"Back: "<<d.back()<<" Front: "<<d.front();

    d.push_front(20);
    cout<<"\nBack: "<<d.back()<<" Front: "<<d.front();

    d.pop_front();
    cout<<"\nBack: "<<d.back()<<" Front: "<<d.front();

    d.pop_back();
    cout<<"\nBack: "<<d.back()<<" Front: "<<d.front();

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

template <class T>
class Node{
public:
    T data;
    Node* prev;
    Node* next;
};

template <class T>
class Deque{
public:
    Node<T>* head;
    Node<T>* tail;
    int sz;

    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    Node<T>* CreateNewNode(T value)
    {
        Node<T>* newNode = new Node<T>;
        newNode->data = value;
        newNode->next = NULL;
        newNode->prev = NULL;
        return newNode;
    }

    ///Pushback
    void push_back(T value)
    {
        Node<T>* newNode = CreateNewNode(value);
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

    ///PushFront
    void push_front(T value)
    {
        Node<T>* newNode = CreateNewNode(value);
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

    ///Pop back
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
        Node<T>* a = tail;
        tail = tail->prev;
        delete a;
        tail->next = NULL;
    }

    ///Pop front
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

        Node<T>* a = head;
        head = head->next;
        delete a;
        head->prev = NULL;
        sz--;
    }

    ///Front
    T front()
    {
        if(sz == 0)
        {
            cout<<"Dequq is empty!\n";
            return -1;
        }
        return head->data;
    }

    ///back
    T back()
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
    Deque<int> d;
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


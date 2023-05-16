#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* prev;
    Node* next;
};

class Deque
{
public:
    Node* head;
    Node* tail;
    int sz;
    int rev;

    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
        rev = 0;
    }

    Node* CreateNewNode(int value)
    {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;
        newNode->prev = NULL;
        return newNode;
    }

    ///Insert At Tail O(1)
    void InsertAtTail(int value)
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

    ///Insert At Head O(1)
    void InsertAtHead(int value)
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

    ///Push Back O(1)
    void push_back(int value)
    {
        if(rev == 0)
        {
            InsertAtTail(value);
        }
        else
        {
            InsertAtHead(value);
        }
    }

    ///Push Front O(1)
    void push_front(int value)
    {
        if(rev == 0)
        {
            InsertAtHead(value);
        }
        else
        {
            InsertAtTail(value);
        }
    }

    ///Delete at Last
    void DeleteLast()
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

    ///Delete At First
    void DeleteFirst()
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

    ///Pop back O(1)
    void pop_back()
    {
        if(rev == 0)
            DeleteLast();
        else
            DeleteFirst();
    }

    ///Pop front O(1)
    void pop_front()
    {
        if(rev == 0)
            DeleteFirst();
        else
            DeleteLast();
    }

    ///Front O(1)
    int front()
    {
        if(sz == 0)
        {
            cout<<"Dequq is empty!\n";
            return -1;
        }
        if(rev == 0)
        {
            return head->data;
        }
        else
        {
            return tail->data;
        }
    }

    ///back O(1)
    int back()
    {
        if(sz == 0)
        {
            cout<<"Deque is empty!\n";
            return -1;
        }
        if(rev == 0)
        {
            return tail->data;
        }
        else
        {
            return head->data;
        }
    }

    ///Reverse O(1)
    void reverse_deque()
    {
        if(rev == 0)
        {
            rev = 1;
        }
        else
        {
            rev = 0;
        }
    }
};

int main()
{
    Deque d;
    d.push_back(5);
    d.push_back(10);
    d.push_back(15);
    d.push_front(20);
    d.reverse_deque();

//    cout<<"Back: "<<d.back()<<" Front: "<<d.front();

    cout<<"Back: "<<d.back()<<" Front: "<<d.front()<<"\n";

    d.pop_front();
    cout<<"Back: "<<d.back()<<" Front: "<<d.front()<<"\n";

    d.pop_back();
    cout<<"Back: "<<d.back()<<" Front: "<<d.front()<<"\n";

    return 0;
}

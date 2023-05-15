#include<bits/stdc++.h>
using namespace std;

template <class T>
class Node
{
public:
    T data;
    Node* next;
    Node* prev;
};

template <class T>
class DoublyLinkedList
{
public:
    Node<T>* head;
    int sz;

    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    ///Create a new node with the given data and returns it O(1).
    Node<T>* CreateNewNode(T data)
    {
        Node<T>* newNode = new Node<T>;
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        return newNode;
    }

    ///Inserts a node with given data at head O(1)
    void InsertAtHead(T data)
    {
        sz++;
        Node<T>* newNode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newNode;
            return;
        }
        Node<T>* a = head;
        newNode->next = a;
        a->prev = newNode;
        head = newNode;
    }

    ///Deletes the value at head. O(1)
    void DeleteAtHead()
    {
        if(head == NULL)
        {
            return;
        }
        Node<T>* a = head;
        Node<T>* b = head->next;
        delete a;
        if(b != NULL)
        {
            b->prev = NULL;
        }
        head = b;
        sz--;
    }

    ///Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }

    ///Print the linked list O(n)
    void Traverse()
    {
        Node<T>* a = head;
        while(a != NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<"\n";
    }

};

///Stack using doubly linked list
template <class T>
class Stack
{
public:
    DoublyLinkedList<T> dl;

    Stack()
    {

    }

    T Top()
    {
        if(dl.getSize() == 0)
        {
            cout<<"Stack is empty!\n";
            T a;
            return a;
        }
        return dl.head->data;
    }

    void Push(T val)
    {
        dl.InsertAtHead(val);
    }

    void Pop()
    {
        if(dl.getSize() == 0)
        {
            cout<<"Stack is empty!\n";
            return;
        }
        dl.DeleteAtHead();
    }

    int getSize()
    {
        return dl.getSize();
    }
};

int main()
{
    ///Reverse a stack using another stack
    Stack <int> a;
    a.Push(4);
    a.Push(6);
    a.Push(2);
    a.Push(3);
    a.Push(1);

    Stack <int> tmp;
    while(a.getSize() > 0)
    {
        tmp.Push(a.Top());
        a.Pop();
    }
    swap(a, tmp);

    while(a.getSize() > 0)
    {
        cout<<a.Top()<<"\n";
        a.Pop();
    }

    return 0;
}


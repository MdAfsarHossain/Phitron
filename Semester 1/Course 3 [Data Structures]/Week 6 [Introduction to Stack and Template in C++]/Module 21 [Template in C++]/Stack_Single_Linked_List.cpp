#include<bits/stdc++.h>
using namespace std;

template <class T>
class Node
{
public:
    T data;
    Node* next;
};

template <class T>
class SinglyLinkedList
{
public:
    Node<T>* head;
    int sz;

    SinglyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    ///Create a new node with the given data and returns it O(1).
    Node<T>* CreateNewNode(T value)
    {
        Node<T> *newNode = new Node<T>;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }

    ///Inserts a node with given data at head O(1)
    void InsertAtHead(T value)
    {
        sz++;
        Node<T>* a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        /// If head is not NULL
        a->next = head;
        head = a;
    }

    ///Deletes the value at head. O(1)
    void DeleteAtHead()
    {
        if(head == NULL)
        {
            return;
        }
        sz--;
        Node<T>* a = head;
        head = a->next;
        delete a;
    }

    ///Returns the size of linked list O(1)
    T getSize()
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

///Stack using Singly linked list
template <class T>
class Stack
{
public:
    SinglyLinkedList<T> dl;

    Stack()
    {

    }

    T top()
    {
        if(dl.getSize() == 0)
        {
            cout<<"Stack is empty!\n";
            return -1;
        }
        return dl.head->data;
    }

    void push(T val)
    {
        dl.InsertAtHead(val);
    }

    void pop()
    {
        if(dl.getSize() == 0)
        {
            cout<<"Stack is empty!\n";
            return;
        }
        dl.DeleteAtHead();
    }
};

int main()
{
    Stack<int> st;

    st.push(3);
    cout<<st.top()<<"\n";
    st.push(4);
    cout<<st.top()<<"\n";
    st.push(5);
    cout<<st.top()<<"\n";

    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    return 0;
}

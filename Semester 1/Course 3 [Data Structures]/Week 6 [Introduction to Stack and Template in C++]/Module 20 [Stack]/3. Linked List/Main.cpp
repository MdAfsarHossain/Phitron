#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;
};

class DoublyLinkedList
{
public:
    Node* head;
    int sz;

    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    ///Create a new node with the given data and returns it O(1).
    Node* CreateNewNode(int data)
    {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        return newNode;
    }

    ///Inserts a node with given data at head O(1)
    void InsertAtHead(int data)
    {
        sz++;
        Node* newNode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newNode;
            return;
        }
        Node* a = head;
        newNode->next = a;
        a->prev = newNode;
        head = newNode;
    }

    ///Inserts the given data at the given index O(n)
    void Insert(int index, int data)
    {
        if(index > sz)
        {
            return;
        }
        if(index == 0)
        {
            InsertAtHead(data);
            return;
        }
        Node* a = head;
        int cur_index = 0;
        while(cur_index != index)
        {
            a = a->next;
            cur_index++;
        }
        Node* newNode = CreateNewNode(data);
        newNode->next = a->next;
        newNode->prev = a;

        Node* b = a->next;
        b->prev = newNode;
        a->next = newNode;
        sz++;
    }

    ///Delete the given index O(n)
    void Delete(int index)
    {
        if(index >= sz)
        {
            cout<<index<<" doesn't exist.\n";
            return;
        }
        Node* a = head;
        int cur_index = 0;
        while(cur_index != index)
        {
            a = a->next;
            cur_index++;
        }
        Node* b = a->prev;
        Node* c = a->next;
        if(b != NULL)
        {
            b->next = c;
        }
        if(c != NULL)
        {
            c->prev = b;
        }
        delete a;
        if(index == 0)
        {
            head = c;
        }
        sz--;
    }

    ///Deletes the value at head. O(1)
    void DeleteAtHead()
    {
        if(head == NULL)
        {
            return;
        }
        Node* a = head;
        Node* b = head->next;
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
        Node* a = head;
        while(a != NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<"\n";
    }

};

///Stack using doubly linked list
class Stack
{
public:
    DoublyLinkedList dl;

    Stack()
    {

    }

    int top()
    {
        if(dl.getSize() == 0)
        {
            cout<<"Stack is empty!\n";
            return -1;
        }
        return dl.head->data;
    }

    void push(int val)
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
    Stack st;

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

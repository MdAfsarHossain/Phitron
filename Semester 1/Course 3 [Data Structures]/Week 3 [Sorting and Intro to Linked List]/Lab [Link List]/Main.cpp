#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

};

class LinkedList{
public:
    Node* head;

    LinkedList()
    {
        head = NULL;
    }

    /// Creates a new node with data = value and next = NULL
    Node* CreateNewNode(int value)
    {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }

    /// Insert new value at Head
    void InsertAtHead(int value)
    {
        Node* a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        /// If head is not NULL
        a->next = head;
        head = a;

    }

    /// Prints the linked list
    void Traverse()
    {
        Node* a = head;
        while(a!= NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<"\n";

    }

    /// Search for a single value
    int SearchDistinctValue(int value)
    {
        Node* a = head;
        int index = 0;
        while(a!= NULL)
        {
            if(a->data == value)
            {
                return index;
            }
            a = a->next;
            index++;
        }
        return -1;
    }

    /// Search all possible occurrence
    void SearchAllValue(int value)
    {
        Node* a = head;
        int index = 0;
        while(a != NULL)
        {
            if(a->data == value)
            {
                cout<<value<<" is found at index "<<index<<"\n";
            }
            a = a->next;
            index++;
        }
    }

};

int main()
{
    LinkedList l;

//    l.Traverse();

    l.InsertAtHead(10);
    l.Traverse();

    l.InsertAtHead(30);
    l.Traverse();
    l.InsertAtHead(20);
    l.Traverse();
    l.InsertAtHead(30);
    l.Traverse();


    cout<<"10 is found at "<<l.SearchDistinctValue(10)<<"\n";
    cout<<"5 is found at "<<l.SearchDistinctValue(5)<<"\n";

    l.SearchAllValue(30);

    return 0;
}

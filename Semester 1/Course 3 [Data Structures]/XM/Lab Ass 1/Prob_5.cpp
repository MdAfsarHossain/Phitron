#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

};

class LinkedList
{
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
        a->next = head;
        head = a;

    }

    /// Count Link List
    int getSize()
    {
        int countN = 0;
        Node* a = head;
        while(a!= NULL)
        {
            countN++;
            a = a->next;
        }

        return countN;
    }

    /// Get value
    int getValue(int num)
    {
        int cnt = getSize();
        if(num>=cnt)
            return -1;

        int countN = 0;
        Node* a = head;
        while(a!= NULL)
        {
            if(num == countN)
            {
                return head->data;
            }
            countN++;
            a = a->next;
        }
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

    /// Print Reverse order
    void display(Node* head)
    {
        if(head == NULL)
            return ;
        display(head->next);
        cout<<head->data<<" ";
    }

    /// Call Print reverse order with parameter
    void printReverse()
    {
        display(head);
        cout<<"\n";
    }

    /// Swap 1st two element
    void swapFirst()
    {
        Node* temp = head;

        if(temp != NULL && temp->next != NULL)
        {
            swap(temp->data, temp->next->data);
        }
    }
};

int main()
{
    LinkedList l;
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(5);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout<<l.getValue(2)<<"\n";
    cout<<l.getValue(6)<<"\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();

    return 0;
}

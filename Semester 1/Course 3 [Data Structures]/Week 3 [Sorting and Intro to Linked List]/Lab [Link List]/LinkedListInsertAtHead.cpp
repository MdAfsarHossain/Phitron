#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int value;
    Node* next;

    Node(int value)
    {
        this->value = value;
        next = NULL;
    }
};

void insertAtHead(int value, Node*& head)
{
    Node *newNode = new Node(value);

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

void display(Node* head)
{
    if(head == NULL)
        return;

    while(head != NULL)
    {
        cout<<head->value<<" ";
        head = head->next;
    }

}

int main()
{
    Node* head = NULL;

    insertAtHead(10, head);
    insertAtHead(20, head);
    insertAtHead(30, head);
    insertAtHead(40, head);
    insertAtHead(50, head);
    insertAtHead(60, head);

    display(head);

    return 0;
}

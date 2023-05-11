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

void insertAlTail(int value, Node*& head)
{
    Node *newNode = new Node(value);

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(Node * head)
{
    if(head == NULL)
    {
        return;
    }

    while(head != NULL)
    {
        cout<<head->value<<" ";
        head = head->next;
    }
}

int main()
{
    Node* head = NULL;

    insertAlTail(10, head);
    insertAlTail(20, head);
    insertAlTail(30, head);
    insertAlTail(40, head);
    insertAlTail(50, head);
    insertAlTail(60, head);

    display(head);

    return 0;
}

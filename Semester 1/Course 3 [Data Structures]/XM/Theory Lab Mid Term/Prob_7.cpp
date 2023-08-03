#include<bits/stdc++.h>

using namespace std;



class node
{
public:
    int data;
    node * nxt;
    node * prv;
};

class DoublyLinkedList
{
public:
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node * CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    //Inserts the given data at the given index O(n)
    void Insert(int index, int data)
    {
        if(index > sz)
        {
            return;
        }
        if(index==0)
        {
            InsertAtHead(data);
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index!= index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        // a = cur_index - 1
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        newnode->prv = a;
        node *b = a->nxt;
        b->prv = newnode;
        a->nxt = newnode;
        sz++;
    }

    //Deletes the given index O(n)
    void Delete(int index)
    {
        if(index >= sz)
        {
            cout<<index<<" doesn't exist.\n";
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index != index)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = a->prv;
        node *c = a->nxt;
        if(b!=NULL)
        {
            b->nxt = c;
        }
        if(c!= NULL)
        {
            c->prv = b;
        }
        delete a;
        if(index==0)
        {
            head = c;
        }
        sz--;
    }

    //Prints the linked list O(n)
    void Traverse()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }

    //Reverse the doubly linked list O(n)
//    void Reverse()
//    {
//        if(head==NULL)
//        {
//            return;
//        }
//        node *a = head;
//        int cur_index = 0;
//        while(cur_index != sz-1)
//        {
//            a = a->nxt;
//            cur_index++;
//        }
//        // last index is in a
//
//        node *b = head;
//        while(b!= NULL)
//        {
//            swap(b->nxt, b->prv);
//            b = b->prv;
//        }
//        head = a;
//    }


    void swap(int i, int j)
    {
        if(i == j || head == NULL || head->nxt == NULL)
            return;

        node* iTh = head;
        node* jTh = head;

        int iIndex = 0;
        while(iIndex != i)
        {
            iTh = iTh->nxt;
            iIndex++;
        }

        int jIndex = 0;
        while(jIndex != j)
        {
            jTh = jTh->nxt;
            jIndex++;
        }

        int temp;
        temp = iTh->data;
        iTh->data = jTh->data;
        jTh->data = temp;

    }

    void deleteZero()
    {
        node* a = head;
        node* nxt;

        int i = 0;
        while(a != NULL)
        {
            if(a->data == 0)
            {
                nxt = a->nxt;
                Delete(i);
                a = nxt;
                i--;
            }
            else
            {
                a = a->nxt;
            }
            i++;
        }
    }
};


int main()
{
    DoublyLinkedList dl;
//    dl.InsertAtHead(10);
//    dl.InsertAtHead(5);
//    dl.InsertAtHead(1);

//    dl.Traverse();
//    dl.Insert(2,100);

//    dl.Traverse();

//    dl.Reverse();
//    dl.Traverse();

/// SWAP FUNCTION CALL
    dl.InsertAtHead(7);
    dl.InsertAtHead(4);
    dl.InsertAtHead(6);
    dl.InsertAtHead(2);
    dl.InsertAtHead(3);

    dl.swap(1, 4);
    dl.Traverse();

/// DELETE ZERO FUNCTION CALL
    DoublyLinkedList dl1;
    dl1.InsertAtHead(5);
    dl1.InsertAtHead(0);
    dl1.InsertAtHead(0);
    dl1.InsertAtHead(2);
    dl1.InsertAtHead(0);

    dl1.deleteZero();
    dl1.Traverse();


    return 0;
}

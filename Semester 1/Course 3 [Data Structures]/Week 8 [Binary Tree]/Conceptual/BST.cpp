#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* left;
    Node* right;

    Node(int value)
    {
        this->value = value;
        left = NULL;
        right = NULL;
    }
};

class BST
{
public:
    Node* root;
    BST()
    {
        root = NULL;
    }

    void InsertBST(int value)
    {
        Node* newNode = new Node(value);
        if(root == NULL)
        {
            root = newNode;
            return;
        }
        Node* current = root;
        Node* previous = NULL;

        while(current != NULL)
        {
            previous = current;
            if(value > current->value)
                current = current->right;
            else
                current = current->left;
        }
        if(value > previous->value)
            previous->right = newNode;
        else
            previous->left = newNode;
    }

    void DisplayTree()
    {
        if(root == NULL)
        {
            cout<<"Empty\n";
            return;
        }
        queue<Node*> q;
        q.push(root);

        while(q.empty() == false)
        {
            Node* frontNode = q.front();
            cout<<frontNode->value<<" ";

            if(frontNode->left != NULL)
                q.push(frontNode->left);
            if(frontNode->right != NULL)
                q.push(frontNode->right);
            q.pop();
        }
        cout<<"\n";
    }

    bool Find(int value)
    {
        if(root == NULL)
            return false;
        Node* temp = root;
        while(temp != NULL)
        {
            if(value > temp->value)
                temp = temp->right;
            else if(value < temp->value)
                temp = temp->left;
            else
                return true;
        }
        return false;
    }

    void DeleteNode(int value)
    {
        if(Find(value))
        {
            Node* current = root;
            Node* previous = NULL;
            while(current != NULL)
            {
                if(value > current->value)
                {
                    previous = current;
                    current = current->right;
                }
                else if(value < current->value)
                {
                    previous = current;
                    current = current->left;
                }
                else
                    break;
            }
            ///Node has no children
            if(current->left == NULL and current->right == NULL)
            {
                Node* delNode = current;
                if(previous->right != NULL and previous->right->value == value)
                {
                    previous->right = NULL;
                }
                else
                {
                    previous->left = NULL;
                }

                delete delNode;
                return;
            }
            ///Node has 1 children
            if(current->left != NULL and current->right == NULL)
            {
                Node* delNode = current->left;
                current->value = current->left->value;
                current->left = NULL;
                delete delNode;
                return;
            }
            if(current->right != NULL and current->left == NULL)
            {
                Node* delNode = current->right;
                current->value = current->right->value;
                current->right = NULL;
                delete delNode;
                return;
            }
            ///Node has 2 children
            if(current->left != NULL and current->right != NULL)
            {
                Node* delNode = current->left;
                current->value = current->left->value;
                current->left = NULL;
                delete delNode;
                return;
            }
        }
        else
        {
            cout<<"Node not found\n";
        }
    }

};

int main()
{
    BST a;
    a.InsertBST(8);
    a.InsertBST(11);
    a.InsertBST(6);
    a.InsertBST(4);
    a.InsertBST(7);
    a.InsertBST(9);
    a.InsertBST(13);
    a.DisplayTree();

//    cout<<a.root->value;
//    cout<<a.root->right->value;

    if(a.Find(19))
        cout<<"Found\n";
    else
        cout<<"Not Found\n";

//    a.DeleteNode(13);
    a.DisplayTree();
//    a.DeleteNode(11);
//    a.DeleteNode(9);
    a.DeleteNode(11);
    a.DisplayTree();

    return 0;
}

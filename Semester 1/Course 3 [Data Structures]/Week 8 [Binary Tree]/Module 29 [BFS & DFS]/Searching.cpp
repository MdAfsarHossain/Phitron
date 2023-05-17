#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int id;
    int value;
    Node* left;
    Node* right;
    Node* parent;
};

class BinaryTree{
public:
    Node* root;
    Node* allNode[6];

    BinaryTree()
    {
        root = NULL;
    }

    Node* CreateNewNode(int id, int value)
    {
        Node* newNode = new Node;
        newNode->id = id;
        newNode->value = value;
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->parent = NULL;
        return newNode;

    }

    void BFS()
    {
        if(root == NULL)
            return;
        queue<Node*> q;
        q.push(root);

        while(!q.empty())
        {
            Node* a = q.front();
            q.pop();
            int p=-1, l=-1, r=-1;

            if(a->left != NULL)
            {
                l = a->left->id;
                q.push(a->left);
            }
            if(a->right != NULL)
            {
                r = a->right->id;
                q.push(a->right);
            }
            if(a->parent != NULL)
            {
                p = a->parent->id;
            }
            cout<<"Node id = "<<a->id<<" Left Child = "<<l;
            cout<<" Right Child = "<<r<<" Parent id = "<<p<<"\n";
        }
    }


    void Insertion(int id, int value)
    {
        Node* newNode = CreateNewNode(id, value);
        if(root == NULL)
        {
            root = newNode;
            return;
        }

        queue<Node*> q;
        q.push(root);

        while(!q.empty())
        {
            Node* a = q.front();
            q.pop();

            if(a->left != NULL)
            {
                q.push(a->left);
            }
            else
            {
                ///Insert in left child of node a
                a->left = newNode;
                newNode->parent = a;
                return;
            }

            if(a->right != NULL)
            {
                q.push(a->right);
            }
            else
            {
                ///Insert in right child of node a
                a->right = newNode;
                newNode->parent = a;
                return;
            }
        }
    }

    void Search(Node* a, int value)
    {
        if(a == NULL)
            return;
        if(a->value == value)
            cout<<a->id<<" ";
        Search(a->left, value);
        Search(a->right, value);
    }
};

int main()
{
    BinaryTree bt;
///Insertion
    bt.Insertion(0, 5);
    bt.Insertion(1, 10);
    bt.Insertion(2, 10);
    bt.Insertion(3, 9);
    bt.Insertion(4, 8);
    bt.Insertion(5, 5);
    bt.Insertion(6, 7);

    bt.BFS();
    cout<<"\n";
    bt.Search(bt.root, 5);
    cout<<"\n";
    bt.Search(bt.root, 10);

    return 0;
}

/**
Inorder: f(left) + root + f(right)
Preorder: root + f(left) + f(right)
Postorder: f(left) + f(right) + root
**/


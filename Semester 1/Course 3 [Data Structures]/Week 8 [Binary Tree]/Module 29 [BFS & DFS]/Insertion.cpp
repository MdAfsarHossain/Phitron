#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int id;
    Node* left;
    Node* right;
    Node* parent;
};

class BinaryTree
{
public:
    Node* root;
    Node* allNode[6];

    BinaryTree()
    {
        root = NULL;
    }

    Node* CreateNewNode(int id)
    {
        Node* newNode = new Node;
        newNode->id = id;
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


    void Insertion(int id)
    {
        Node* newNode = CreateNewNode(id);
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
};

int main()
{
    BinaryTree bt;

    ///Insertion
    bt.Insertion(0);
    bt.Insertion(1);
    bt.Insertion(2);
    bt.Insertion(3);
    bt.Insertion(4);
    bt.Insertion(5);

    bt.BFS();
    return 0;
}

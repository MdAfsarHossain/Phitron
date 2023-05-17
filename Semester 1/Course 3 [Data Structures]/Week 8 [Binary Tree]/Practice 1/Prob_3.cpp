#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int id;
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

    Node* CreateNewNode(int id)
    {
        Node* newNode = new Node;
        newNode->id = id;
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->parent = NULL;
        return newNode;
    }

    void build_binary_tree()
    {
        for(int i=0; i<6; i++)
            allNode[i] = CreateNewNode(i);

        allNode[0]->left = allNode[1];
        allNode[0]->right = allNode[2];

        allNode[1]->left = allNode[5];
        allNode[1]->parent = allNode[0];

        allNode[5]->parent = allNode[1];

        allNode[2]->left = allNode[3];
        allNode[2]->right = allNode[4];
        allNode[2]->parent = allNode[0];

        allNode[3]->parent = allNode[2];
        allNode[4]->parent = allNode[2];

        root = allNode[0];
    }

    void DFS(Node* a)
    {
        if(a == NULL)
            return;

        cout<<a->id<<" ";
        DFS(a->left);
        DFS(a->right);
    }

    int height(Node* a)
    {
        if(a == NULL)
            return 0;

        int leftHeight = height(a->left);
        int rightHeight = height(a->right);

        return 1 + max(leftHeight, rightHeight);
    }
};

int main()
{
    BinaryTree bt;

    bt.build_binary_tree();
    bt.DFS(bt.root);

    cout<<"\n";
    cout<<bt.height(bt.root)<<"\n";

/// 0 1 5 2 3 4
    return 0;
}


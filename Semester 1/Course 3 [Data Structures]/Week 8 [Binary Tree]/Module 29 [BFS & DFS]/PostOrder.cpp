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
    Node* allNode[9];

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
        for(int i=0; i<9; i++)
        {
            allNode[i] = CreateNewNode(i);
        }

        ///Tree: 1
//        allNode[0]->left = allNode[1];
//        allNode[0]->right = allNode[2];
//
//        allNode[1]->left = allNode[5];
//        allNode[1]->parent = allNode[0];
//
//        allNode[5]->parent = allNode[1];
//
//        allNode[2]->left = allNode[3];
//        allNode[2]->right = allNode[4];
//        allNode[2]->parent = allNode[0];
//
//        allNode[3]->parent = allNode[2];
//        allNode[4]->parent = allNode[2];
//
//        root = allNode[0];
      ///Tree: 2
        allNode[0]->left = allNode[1];
        allNode[0]->right = allNode[2];

        allNode[1]->left = allNode[3];
        allNode[1]->right = allNode[4];
        allNode[1]->parent = allNode[0];

        allNode[2]->left = allNode[5];
        allNode[2]->right = allNode[6];
        allNode[2]->parent = allNode[0];
        allNode[5]->parent = allNode[2];
        allNode[6]->parent = allNode[2];

        allNode[3]->left = allNode[7];
        allNode[3]->right = allNode[8];
        allNode[3]->parent = allNode[1];
        allNode[4]->parent = allNode[1];

        allNode[8]->parent = allNode[3];
        allNode[9]->parent = allNode[3];

        root = allNode[0];
    }

    ///Postorder: f(left) + f(right) + root
    void Postorder(Node* a)
    {
        if(a == NULL)
            return;
        Postorder(a->left);
        Postorder(a->right);
        cout<<a->id<<" ";
    }
};

int main()
{
    BinaryTree bt;

    bt.build_binary_tree();
    bt.Postorder(bt.root);
    return 0;
}

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
};

int main()
{
    BinaryTree bt;

    bt.build_binary_tree();
    bt.BFS();

    return 0;
}

/**
Inorder: f(left) + root + f(right)
Preorder: root + f(left) + f(right)
Postorder: f(left) + f(right) + root
**/

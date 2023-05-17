#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* left;
    Node* right;
};

class BST
{
public:
    Node* root;

    BST()
    {
        root = NULL;
    }

    Node* CreateNewNode(int value)
    {
        Node* newNode = new Node;
        newNode->value = value;
        newNode->left = NULL;
        newNode->right = NULL;
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

            int p = -1, l = -1, r = -1;

            if(a->left != NULL)
            {
                l = a->left->value;
                q.push(a->left);
            }

            if(a->right != NULL)
            {
                r = a->right->value;
                q.push(a->right);
            }

            cout<<"Node value = "<<a->value<<" Left Child = "<<l;
            cout<<" Right Child = "<<r<<"\n";
        }
    }

    void Insert(int value)
    {
        Node* newNode = CreateNewNode(value);

        if(root == NULL)
        {
            root = newNode;
            return;
        }

        Node* cur = root;
        Node* prev = NULL;
        while(cur != NULL)
        {
            if(newNode->value > cur->value)
            {
                prev = cur;
                cur = cur->right;
            }
            else
            {
                prev = cur;
                cur = cur->left;
            }
        }

        if(newNode->value > prev->value)
        {
            prev->right = newNode;
        }
        else
        {
            prev->left = newNode;
        }
    }

    bool Search(int value)
    {
        Node* cur = root;
        while(cur != NULL)
        {
            if(value > cur->value)
            {
                cur = cur->right;
            }
            else if(value < cur->value)
            {
                cur = cur->left;
            }
            else
                return true;
        }
        return false;
    }

    void Delete(int value)
    {
        Node* cur = root;
        Node* prev = NULL;

        while(cur != NULL)
        {
            if(value > cur->value)
            {
                prev = cur;
                cur = cur->right;
            }
            else if(value < cur->value)
            {
                prev = cur;
                cur = cur->left;
            }
            else
                break;
        }
        if(cur == NULL)
        {
            cout<<"Vlaue is nor present in BST\n";
            return;
        }
        ///Case 1: Both Child is NULL
        if(cur->left == NULL && cur->right == NULL)
        {
            if(prev->left != NULL && prev->left->value == cur->value)
            {
                prev->left = NULL;
            }
            else
            {
                prev->right = NULL;
            }
            delete cur;
            return;
        }
        ///Case 2: Node has only one child
        if(cur->left == NULL && cur->right != NULL)
        {
            if(prev->left != NULL && prev->left->value == cur->value)
            {
                prev->left = cur->right;
            }
            else
            {
                prev->right = cur->right;
            }
            delete cur;
            return;
        }

        if(cur->left != NULL && cur->right == NULL)
        {
            if(prev->left != NULL && prev->left->value == cur->value)
            {
                prev->left = cur->left;
            }
            else
            {
                prev->right = cur->left;
            }
            delete cur;
            return;
        }
        ///Case 3: Node has two child
        Node* temp = cur->right;
        while(temp->left != NULL)
        {
            temp = temp->left;
        }
        int saved = temp->value;
        Delete(saved);
        cur->value = saved;
    }

};

int main()
{
    BST bst;

    bst.Insert(6);
    bst.Insert(4);
    bst.Insert(3);
    bst.Insert(5);
    bst.Insert(7);
    bst.Insert(8);

//    bst.BFS();

//    cout<<bst.Search(1)<<"\n";
//    cout<<bst.Search(7)<<"\n";

    ///Case 1:
//    bst.Delete(8);
//    bst.BFS();

    ///Case 2:
//    bst.Delete(7);
//    bst.BFS();

    ///Case 3:
    bst.Delete(6);
    bst.BFS();

    return 0;
}

// now we will see how to traverse a tree but first create a linked list
#include<iostream>
using namespace std;

struct  node
{
    int key;
    node *left,*right;
    node(int k)
    {
        key = k;
        left=right=NULL;
    }
};
// now first inorder traversal
void inorder(node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<(root->key)<<" ";
        inorder(root->right);
    }
}
// now pre order traversal
void preorder(node *root)
{
    if(root!=NULL)
    {
        cout<<(root->key)<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

// now we will do post order traversa;
void postorder(node *root)
{
    if(root!=NULL)
    {
         postorder(root->left);
         postorder(root->right);
         cout<<(root->key)<<" ";
    }
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    return 0;
}
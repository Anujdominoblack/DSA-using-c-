#include<iostream>
using namespace std;

struct node{
    int key;
    node *left,*right;
    node(int k)
    {
        key =k;
        left = right = NULL;
    }
};
// the idea to check height of tree 
// we can traverse both half of tree recursively and add 1 for each node
int height(node *root)
{
    if(root == NULL){return 0;}  // when no child return 0 
    else{
        return max(height(root->left),height(root->right))+1;
    }
}
int main()
{
    node *root  = new node(30);
    root->left = new node(40);
    root->right = new node(60);
    root->left->left = new node(70);
    root->left->left->left = new node(80);
    cout<<height(root);
    return 0;
}
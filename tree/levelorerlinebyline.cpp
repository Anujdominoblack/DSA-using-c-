#include<iostream>
#include<queue>
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
void printlevel(node *root)
{
    if(root==NULL){return;}
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1)
    {
        node *curr = q.front();
        q.pop();
        if(curr==NULL)
        {
            cout<<"\n";
            q.push(NULL);
            continue;
        }
        cout<<(curr->key)<<" ";
        if(curr->left!=NULL){q.push(curr->left);}
        if(curr->right!=NULL) {q.push(curr->right);}
    }

     
}
int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(8);
    root->left->right = new node(7);
    root->left->right->left = new node(9);
    root->left->right->right = new node(15);
    root->right->left = new node(6);
    printlevel(root);
    return 0;
}
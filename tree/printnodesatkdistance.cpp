// we have to nodes which is at k distance from root node
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
// now writing the function
void printdist(node *root,int k)
{
    if(root ==NULL){return ;}
    if(k==0){cout<<(root->key)<< " ";}
    else{
        printdist(root->left,k-1);
        printdist(root->right,k-1);
    }
}

int main()
{
    node *root  = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->left->right = new node(50);
    printdist(root,2);
    
    return 0;
}
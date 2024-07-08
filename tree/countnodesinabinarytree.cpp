// now we will write a code to count the number of nodes in a binary tree
// first we will implement the naive solution;
#include<iostream>
using namespace std;

// struct
struct node{
    int key;
    node *left,*right;
    node(int d){
        key =  d;
        left=right=NULL;
    }
};
// driver code
int countnodes(node *root)
{
    if(root==NULL){
        return 0;
    }
    else{
        return 1+countnodes(root->left)+countnodes(root->right);
    }
}
//driver code
int main(){
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    cout<<countnodes(root);
    return 0;
}
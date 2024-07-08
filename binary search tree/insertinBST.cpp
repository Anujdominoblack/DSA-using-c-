// now we will insert in BST
// first we will use recursion
#include<iostream>
using namespace std;

struct node{
    int key;
    node *left,*right;
    node(int d){
        key=d;
        left=right=NULL;
    }
};

node *insert(node *root,int x)
{   // now the idea is first we will check for the positon if x is less than root it is inserted on right otherwise
// it is inserted on the left
// we will traverse and find null and then insert root there and do the linking using recursive function
    if(root==NULL){
        return new node(x);
    }
    else if(root->key>x){
        root->left = insert(root->left,x);
        // here we are doing the insert to do the linking

    }
    else if(root->key<x){
        root->right = insert(root->right,x);
        // here we are doing the insert to do the linking
    }
    return root;

}
//  tree traversal
void inorder(node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
//driver code
int main(){
    node *root = new node(15);
    root->left = new node(5);
    root->left->left = new node(3);
    root->right = new node(20);
    root->right->left = new node(18);
    root->right->left->left = new node(16);
    root->right->right = new node(80);
    int key;
    cin>>key;
    root =insert(root,key);
    inorder(root);
   
    return 0;
}
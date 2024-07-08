// now we will see how to delete node ftom a bst
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
// now we will successor function to find successfor 
// successor is just larger than the node which needs to be deleted if it is a root
node *getsuccssor(node *curr)
{
    curr = curr->right;
    // as successfor will always be on right
    while(curr!=NULL && curr->left!=NULL)
    {
        // above two are  necessary condiiton to find left to find the succssor
        curr = curr->left;
    }
    return curr;
}
//now we will  write delete node to delete the node

node *delnode(node *root,int x)
{
      if(root==NULL){
        return root;// that means it is empty
      }
      if(root->key>x){
        root->left = delnode(root->left,x);
      }
      else if(root->key<x){
        root->right = delnode(root->right,x);
      }
      else{
        if(root->left==NULL){
            node *temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            node *temp = root->left;
            delete root;
            return temp;
        }
        else{

            node *succ = getsuccssor(root);
            root->key = succ->key;
            root->right = delnode(root->right,succ->key);
        }

      }
      return root;
}
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
    root = delnode(root,key);
    return 0;
}
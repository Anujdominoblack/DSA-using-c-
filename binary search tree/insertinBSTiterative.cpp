// now we will insert using iterative approach
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
// now we will iterative apporach
node *insert(node *root,int x){
    // first we will create that node
    node  *temp = new node(x);
    // now we will find the position
    node *parent = NULL;
    node *curr = root;
    while(curr!=NULL){
        parent = curr;
        if(curr->key <x){
            curr = curr->right; // it is on right side
        }
        else if(curr->key>x){
            curr = curr->right;
        }
        else{
            return root; // means already present
        }
    }
    // now curr is at null and parent is at ancestor
    if(parent==NULL){
        return temp;
    }
    else if(parent->key<x){
        parent->right = temp;
    }
    else{
        parent->left = temp;
    }
    
    return root;

}
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
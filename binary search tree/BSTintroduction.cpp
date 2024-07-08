// now we will see how bst is implemented and properly used
// first operation is search in bst
#include<iostream>
using namespace std;

struct node{
    int key;
    node *left,*right;
    node(int d){
        key=d;
        left=right=NULL;
    }
}; // node is successfully created

// function for searching
bool search(node *root,int key){
    if(root==NULL){
        return false;
    }
    if(root->key==key){
        return true;
    }
    else if(root->key>key){
        // if greater then it is prsent in left subtree
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
        // it is present in right subtree
    }
}
// driver code
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
    int result = search(root,key);
    if(result){
       cout<<" key is present";
    }
    else{
        cout<<"key is not present";
    }
    return 0;
}
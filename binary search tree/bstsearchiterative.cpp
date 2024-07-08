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

bool search(node *root,int x)
{
    while(root!=NULL){
        if(root->key==x){
            return true;
        }
        else if(root->key>x){
            root = root->left;// if root is greater it must be prsent in left subtree
        }
        else{
            root = root->right; //  else root is in right subtree
        }
    }
    return false;
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
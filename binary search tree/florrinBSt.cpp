#include<iostream>
using namespace std;

struct node{
    int key;
    node *left,*right;
    node(int d){
        key = d;
        left = right = NULL;
    }
}; 
// in this question we will find the floor in bst that mmeans 
// the element that is just smaller or equal to the given element
// idea is traverse if node key is present return the node 
// otherwise move on left to node if less than key and then move its all right
// below is the implementation given
node *floor(node *root,int key){
    node *res = NULL;
    while(root!=NULL){
        if(root->key==key){
            return root;
        }
        else if(root->key>key){
            root = root->left;
        }
        else{
            res = root;
            root = root->right; // a closest will alwways be on right 
        }
    }
    return res;
}

// driver code
int main(){
    node *root = new node(10);
    root->left = new node(5);
    root->right = new node(15);
    root->right->left = new node(12);
    root->right->right = new node(30);
    node *ans = floor(root,5);
    cout<<ans->key;
    return 0;
}
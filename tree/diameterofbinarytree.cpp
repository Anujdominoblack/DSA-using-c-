// idea is we haev to find the maximum diameter of the binary tree
// that is the longest path between two nodes
// and we will calculate the following max(1+lh+rh)
#include<iostream>
using namespace std;

struct node{
    int key;
    node *left,*right;
    node(int d)
    {
        key =d;
        left=right=NULL;
    }
};
// function for finding the height
int height(node *root){
    if(root==NULL){
        return 0;
    }
    else{
        return 1+max(height(root->left),height(root->right));
    }
}
// now the main function
// calculate for each node and store the maximum
int diameter(node *root){
    if(root==NULL){return 0;}
    int d1 = 1+height(root->left)+height(root->right); // for diamter of a node from leaf to leaf
    int d2 =  diameter(root->left); // diamter for its left child

    int d3 = diameter(root->right); // diamter for its right child

    // now we will return the maximum of it for each node
    return max(d1,max(d2,3));
}

// driver code
int main(){
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left  =  new node(40);
    root->right->left->left = new node(50);
    root->right->right= new node(60);
    root->right->right->right = new node(70);
    int result = diameter(root);
    cout<<result;
    return 0;
}
// implemented 

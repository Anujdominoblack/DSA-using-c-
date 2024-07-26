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
// now we will write funnction
node *ceil(node *root,int key){
    node *res = NULL;
    while(root!=NULL){
        if(root->key==key){
            return root;
        }
        else if(root->key<key){
            root = root->right;
        }
        else{
            res = root;
            root = root->left;
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
    node *ans = ceil(root,11);  // function call
    cout<<ans->key;
    return 0;
}
// runs perfectly
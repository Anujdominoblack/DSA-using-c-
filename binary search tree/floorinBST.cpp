// floor means finding the closest small or equalt to that node
#include<iostream>
using namespace std;

struct node{
    int key;
    node *left,*right;
    node(int d)
    {
        key = d;
        left=right=NULL;
    }
};

// now we will iterative to find the floor
node *floor(node *root,int x){
    node *res=NULL;  // first initializing null so that if value is not there 
    while (root!=NULL)  // iteration 
    {
        if(root->key==x){
            return root;
        }
        else if(root->key>x){  // it is the bst property is key is greater than it is on left half
            root = root->left;
        }
        else{
            res = root;  // it is smaller store it in 
            root = root->right; // because at left of root all the values will be less 
        }
    }
    return res;
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
    node *result =floor(root,key);  // function call
    cout<<result->key;
   
    return 0;
}

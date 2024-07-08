// now we will use efficient solution
#include<iostream>
#include<cmath>
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

// function
int countnodes(node *root){
int lh=0,rh=0;
node*curr = root;
while(curr!=NULL){
    lh++;
    curr = curr->left;
}
curr = root;
while(curr!=NULL){
    rh++;
    curr = curr->right ;
}
if(lh==rh){
    return pow(2,lh)-1;
}
else{
    return 1+countnodes(root->left)+countnodes(root->right);
}
}

int main(){
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    cout<<countnodes(root);
    return 0;
}
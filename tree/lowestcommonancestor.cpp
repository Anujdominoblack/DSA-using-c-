#include<iostream>
#include<vector>
#include<algorithm>
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

bool findpath(node *root, vector<node *> &p,int n){
    if(root==NULL){return false;}
    p.push_back(root);
    if(root->key==n){return true;}
    if(findpath(root->left,p,n)|| findpath(root->right,p,n)){
        return true;
    }  
    p.pop_back();
    return false;
}

node *lca(node *root,int n1,int n2){
    vector<node *> path1,path2;
    if(findpath(root,path1,n1)==false || findpath(root,path2,n2)==false){
        return NULL;
    }
    for(int i=0;i<path1.size()-1 && i<path2.size();i++){
        if(path1[i+1]!=path2[i+1]){
            return path1[i];
        }
    }
    return NULL;
}

int main(){
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    cout<<lca(root,20,30)->key;
    return 0;
}
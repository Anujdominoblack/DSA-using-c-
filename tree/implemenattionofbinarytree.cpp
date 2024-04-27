// every  node has at most two children
#include<iostream>
using namespace std;

struct node{
    int key;
    node *left,*right;
    node(int k)
    {
        key = k; //constructor is called
        left=right=NULL;
            }
};
// driver code
int main()
{
    node *root  = new node(10);
    root ->left  = new node(20);
    root ->right = new node(30);
    return 0;
}
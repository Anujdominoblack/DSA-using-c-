#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printlist(node *head)
{
    if(head==NULL)
    {
        return ;
    }
    cout<<(head->data)<<" ";  // printing data moving gead to next node 
    printlist(head->next); //recursive call
}
// driver code
int main()
{
    node *head = new node(50);
    head->next = new node(80);
    head->next->next = new node(100);
    printlist(head); // passing head to function
    return 0;
}
// here we will insert at end of the linked list 
// here we will change head only when linked list is empty 
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

node *insertatend(node *head,int x)
{   node *temp = new node(x);
    node *curr = head;
    if(head==NULL)
    {
        return temp;
    }
    while(curr->next!=NULL)  // we are doing it because we need hold of last element whose next is null
    {
        curr = curr->next;
    }
    curr->next = temp;  // after getting hold of last element we link last node with temp
    return head;  // we need to return head to peroform opertions 
    
}

void printlist(node *head)
{
    while(head!=NULL)
    {
        cout<<(head->data)<<" ";
        head = head->next;
    }
}

// driver code
int main()
{
    node *head = NULL;
    head = insertatend(head,10);
    head = insertatend(head,20);
    head = insertatend(head,30);
    printlist(head);
    return 0;
}
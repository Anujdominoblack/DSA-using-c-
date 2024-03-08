// now we will insert a node in begining of a doubly linked list
#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev; // one pointer for next one for previous
    node(int d)
    {
        data = d;
        next=prev=NULL;
    }
};  // doubly linked list created

// now we will write function
node *insertatfirst(node *head,int x) //we will return at pointer
{
    // first we will create a node
    node *temp = new node(x);
    
    temp->next = head;
    if(head!=NULL)
    {
        head->prev = temp;
    }

    return temp;
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
    head = insertatfirst(head,10);
    head = insertatfirst(head,20);
    head = insertatfirst(head,30);
    printlist(head);
    return 0;
}
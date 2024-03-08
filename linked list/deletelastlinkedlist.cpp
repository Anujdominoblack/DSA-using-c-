// now we want to delete last element from a singly linked list
// now to delete node n we need to have hold of node n-1
// and we will setup node n-1 next to null
// we will have hold by doing node->next->next is null or not
#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

// function for deleting 
node *dellast(node *head)
{   if(head==NULL)
{
    return NULL;
}
    if(head->next==NULL)  // it is an edge case
    {
        delete head;
        return NULL;
    }
    node *curr = head;
    while(curr->next->next !=NULL)
    {
        curr = curr->next;  // 
    }
    delete(curr->next); // deallocating memory
    curr->next = NULL;
    return head;

}

// printing
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
    node *head  =  new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head = dellast(head);
    printlist(head);
    return 0;
}

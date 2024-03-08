// in this we will see how to create a doubly linked list
// a doubly linked list contains a extra pointer called previous
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
}; // a doubly pointer created 
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
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);
    // three nodes created 
    // now we will do linking
    head->next = temp1;
    temp1->prev=head;
    temp1->next = temp2;
    temp2->prev = temp1;
    printlist(head);
    return 0;

}
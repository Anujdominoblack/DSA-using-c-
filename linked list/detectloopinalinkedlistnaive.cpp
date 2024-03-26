// in this we will find if loop exist in a linke list or not 
// first we will implement naive method
#include<iostream>
using namespace std;
// in this we will set next of every  node to a temporaray node temp 
// and if next of any node points to temp it means there is a cycle

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data =x;
        next = NULL;
    }
}; //linked list is created

// function for checking
bool iscycle(node *head)
{
    node *temp = new node(0); //dummy node created
    node *curr = head;
    while(curr!=NULL)
    {
        if(curr->next = temp)
        {
            return true;
        }
        if(curr->next ==NULL)
        {
            return false;
        }
        node *curnext = curr->next; //holding the curr next
        curr->next = temp;
        curr = curnext;
    }
    return false;
}

// driver code
int main()
{
    node *head = new node(10);
    node *head1 = new node(20);
    node *head2 = new node(30);
    node *head3= new node(40);
    head->next = head1;
    head1->next = head2;
    head2->next = head3;
    head->next = head1;
    int result = iscycle(head);
    if(result==0)
    {
        cout<<"there is no cycle in the linked list";
    }
    else{
        cout<<"there is cycle in the linked list";
    }
    return 0;

}
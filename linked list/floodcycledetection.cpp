// the idea or algorithem says that
// we will have two pointer one pointer will move two position at a time and second pointer will move one position at a time
// and if any point two pointer meet it meets a cycle exist
// and if any of them reaches null means there is no loop
#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data =x;
        next = NULL;
    }
};//linkedlist is successfully created

// function to check if loop exist
bool isloop(node *head)
{
    node *slow=head;
    node *fast=head;
    while((fast!=NULL) && slow->next!=NULL)
    {
        slow= slow->next;
        fast = fast->next->next;  //we increment first to avoid head overlap
        if(slow==fast)
        {
            return true;
        }
    }
    return false;
}
//driver code
int main()
{
    node *head = new node(10);
    node *head1 = new node(20);
    node *head2 = new node(30);
    node *head3= new node(40);
    head->next = head1;
    head1->next = head2;
    head2->next = head3;
    head3->next = head2;
    int result = isloop(head);
    if(result==0)
    {
        cout<<"there is no cycle in the linked list";
    }
    else{
        cout<<"there is cycle in the linked list";
    }
    return 0;

}
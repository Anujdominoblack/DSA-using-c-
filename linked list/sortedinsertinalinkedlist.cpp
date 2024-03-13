// in this we will we will insert a value in a linked list 
// we will do the following 
// we will check current next is smaller than value if it is smaller we will go to next node and check again
// but when we check curren->next is greater than 45 we will stop and insert the node there 
// this is the implementation
#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;// creating a next value
    node(int x)
    {
        data = x; //assinging value
        next = NULL; // making next as null
    }
};  //linked list is made succesfully 

// now we will write the function
node *sortedinsert(node *head,int x)
{
    node *temp = new node(x);
    if(head==NULL){return temp;}
    if(x<head->data)  // if value is less than head then it is inserted as head 
    {
        temp->next = head;
        return temp;  //return temp as head
    }
    node *curr = head;
    while(curr->next->data<x &&  curr!=NULL)
    {
       curr = curr->next;  // as we will move node till it is value less than x 
    }
    temp->next = curr->next; // first link temp with next node
    curr->next = temp; // linking temp and current
    return head;
}

// for printing values
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
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head = sortedinsert(head,15);
    printlist(head);
    return 0;
}
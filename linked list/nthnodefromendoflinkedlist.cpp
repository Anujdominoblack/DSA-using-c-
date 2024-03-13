// we are given a linked list and a number n we need to print nth from end of linked list 
// the first method we will implement using the length of linked list 
// we will first count how many nodes the linked list has once we have that we can find nth node using that
// we need to print (len-n+1)th node formula 
// below is the implementation
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

void printnthnode(node *head,int x)
{
    int len=0;
    for(node *curr = head;curr!=NULL;curr= curr->next)  // pointer to 1st node upto null
    {
       len++;
    }
    if(len<x){
        return ;  // boundary condition as we are trying to fetch a node that doesn exist
    }
    node *curr = head;
    for(int i=1;i<(len-x+1);i++)
    {
        curr = curr->next;
    }
    cout<<(curr->data)<<" ";
}
//driver code
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    printnthnode(head,2);  //properly implemented  function call
    return 0;
}
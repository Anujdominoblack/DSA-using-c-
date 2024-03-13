// in efficient solution we will use 2pointer approach
// one fast pointer and one slow pointer
// fast move 2 node at a time slow move 1 node at a time
// when it is even when the fast pointer reaches null then slow reaches middle
// when it is odd when fast reaches node whose next is null then slow reaches middle
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

// function for printing middle
void printmiddle(node *head)
{
    if(head==NULL){return ;}
    node *slow =head,*fast = head; //2 pointers created 
    while(fast!=NULL && fast->next != NULL) //satisfying both even and odd conditions
    {
        slow = slow->next; //moving one node at a time
        fast = fast->next->next ; //moving 2 node at a time
    }
    cout<<(slow->data)<<" ";
}
// if odd : when fast reaches last node slow reaches middle
// if even : when fast reaches null then slow reaches middle
//driver code
int main()
{
         node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    printmiddle(head);  //function call
    return 0;
}
//succesfully implemented

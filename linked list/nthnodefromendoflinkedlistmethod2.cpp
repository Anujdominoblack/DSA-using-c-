// in the second method we will use 2 pointers one fast and one slow
// we will first move the fast pointer to n node head of head or slow pointer 
// then we will move both fast and slow pointer at same speed that is one node at a time
//when first pointer reaches null second reaches the desried node
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

// function for printing the node
void printnthnode(node *head,int n)
{
    if(head==NULL){return;}
    node *first = head;  // first pointer
    // now we will move first pointer n node ahead
    for(int i=0;i<n;i++)
    {
        first = first->next;// moved pointer ahead
    }
    // noe we will make second pointer
    node *second = head;
    while(first!=NULL)
    {
           second = second->next;
           first = first->next;  //moving both at a time
    }
    cout<<(second->data)<<" ";  // as loop breaks when first reaches null

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



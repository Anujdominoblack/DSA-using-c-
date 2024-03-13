// in this problem we have to find the middle of a sorted linked list
// first we will have naive solution 
// which tells us to count the total number of nodes 
// then going to count/2 node and print it 
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

// function for the naive solution
void printmiddle(node *head) // not returning anything as head is same
{ if(head==NULL){return ;}
  int count =0;
  node *curr ; //pointer for iteration
  for(curr = head; curr!=NULL;curr = curr->next)  //starting from head and going upto last node to count
  {
               count++; //counting the nodes
  }
  // now we will print the nodes
  curr = head;  //setting current again to head
  for(int i=1;i<=count/2;i++)
  {
    curr = curr->next; //moving to next node
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
    printmiddle(head);
    return 0;
}
// succesfully implemented

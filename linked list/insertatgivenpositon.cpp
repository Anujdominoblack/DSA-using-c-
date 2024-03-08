// in this we will insert at given poistion 
// to do that we will traverse upto position less 1 and then link new node to position-1->next 
// and then we will link position-1->next to new node
// thats all
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

// insert ar given position
node *insertatpos(node *head,int pos,int value)
{  node *temp = new node(value);
 if(pos==1)
 {
   temp->next = head;
   return temp;
 }
 node *curr = head;
 for(int i=1;i<=pos-2 && curr!=NULL ;i++)
 {
    curr = curr->next ; // for reaching one position earlier 
    // curr equals to null implies we are trying to insert beyond last 
 }
 if(curr==NULL)
 {
    return head;
 }
 temp->next = curr->next;  // linking current next to temp
 curr->next = temp;  // delinking curr next and linking it to temp
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
    head = insertatpos(head,4,40);
    printlist(head);
    return 0;
}

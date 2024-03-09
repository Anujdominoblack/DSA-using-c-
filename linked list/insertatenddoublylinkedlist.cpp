// idea is we are going to begin from head and will traverse upto last eleemnt to get hold of it 
// and by creating a new node with given data we will do the linking
#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
    node(int d)  //constructor 
    {   data = d;
        next=prev=NULL;
    }
};

//going to write the function
node *insertatend(node *head,int value)
{
    node *temp = new node(value);
    if(head==NULL)
    {
        return temp;
    }
    node *curr = head ;// creating pointer of type head and assign it to curr
    while(curr->next !=NULL)
    {
        curr = curr->next; // to get hold of last element 
    }
    curr->next = temp;
    temp->prev = curr; //linking 
    return head;
}
// printiing nodes
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
    node *head = NULL;
    head = insertatend(head,20);
    head = insertatend(head,40);
    head = insertatend(head,60);
    printlist(head);
    return 0;
}
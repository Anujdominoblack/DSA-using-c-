// in this we will insert new node at brgining
#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

// function form inserting
node *insertatbegin(node *head,int x) // it takes input as node and value
{
    node *temp = new node(x);  // creating temporary node allocating meomry and giving value
    temp->next = head; // linking 
    return temp;  //returning it 
}
// for printing
void printlist(node *head)
{
    while(head !=NULL)
    {
        cout<<(head->data)<<" ";
        head = head->next;
    }
}


//driver code
int main()
{
    node *head = NULL;
    head = insertatbegin(head,20);
    head = insertatbegin(head,40);
    head = insertatbegin(head,50);
    printlist(head);
    return 0;
}
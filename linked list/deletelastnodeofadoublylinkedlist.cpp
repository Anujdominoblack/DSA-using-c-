// to delete last node we first need to reach last node
// get hold of second last node
// make its next null and delete last node
#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
    node(int x)
    {
        data = x;
        next = prev = NULL;
    }
}; //linked list created
// now we will write function delete end
node *deleteend(node *head)
{
    // writing corner case
    if(head==NULL){return NULL;}
    if(head->next==NULL){delete(head);return NULL;}
    node *curr = head;
    while(curr->next!=NULL)
    {
          curr = curr->next;// getting hold of last element
    }
    // now necessary changes
    curr->prev->next = NULL; // we delinked last and second last node 
    delete(curr);
    return head;
}

// void printlist
void printlist(node *head)
{
    while(head!=NULL)
    {
        cout<<(head->data)<<" "; //printing the data
        head = head->next; // moving head to next node
    }
}

//driver code
int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    head = deleteend(head);
    printlist(head);
    return 0;
}
// we are going to remove the duplicates from the linked list
// the idea is we will check node->next data with node data if it is same we will move node->next to node->next->next 
// and then we will delte node->next and dealloacte memory
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

//function for removing duplicates
void removedups(node *head)
{
    node *curr = head;
    while(curr!=NULL && curr->next!=NULL) //stopping at last node
    {
        if(curr->data ==curr->next->data)
        {
            node *temp = curr->next; //getting hold of node->next
            curr->next = curr->next->next;
            delete(temp);//deallocating memory
        }
        else{
            curr = curr->next ;// if they are distinct 
        }
    }
}

//for printing values
void printlist(node *head)
{
    while(head!=NULL)
    {
        cout<<(head->data)<<" ";
        head = head->next;

    }
}
//driver code
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(20);
    head->next->next->next = new node(30);
    head->next->next->next->next = new node(30);
    printlist(head);  //properly implemented  function call
    return 0;
}
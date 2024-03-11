// in this we will delte head of  a circular linked list 
// the idea is we will traverse upto the last node grt hold of it
// and change the next of last node to head->next and delete head 
// thats all we need to do
#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x) //constructor
    {
        data = x;
        next = NULL;
    }
};  //linked list is created 

node *Deltehead(node *head)
{
    if(head==NULL){return NULL;} // as linked list is empty retunr null
    if(head ->next = head){
        delete(head); //memory deallocation
        return NULL;
    }
    node *curr = head; // pointer to head node
    while(curr->next !=head)
    {
          curr = curr->next ; // getting hold of last node
    }
    node *temp = head->next;
    curr->next = head->next ; //linking last node to second node
    delete(head);
    return temp;;
}
// printing elements of linked list
void printlist(node *head)
{    if(head ==NULL)
    {
        return;
    }
    cout<<(head->data)<<" "; //printing head node
    for(node *p = head->next ; p!=head ;p=p->next) //writing condition
    {
        cout<<(p->data)<<" ";  //printing data
    }
}

//driver code
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(40);
    head->next->next->next = head;
    head = Deltehead(head);
    printlist(head);
    return 0;

}
//in this problem how can we deelte kth node from a circularlinked list
// this porblem can be divided into subparts in first part we will check if we have to delete first node if 
// we have to delelte first then do usual else following way
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


node *deletekth(node *head,int x)
{
    if(head==NULL){
        return NULL;
    }
    node *curr = head;
    // for deleting kth node we have to get hold of k-1th node and link it to k+1th node
    for(int i=0;i<x-2;i++)
    {
        curr = curr->next;// hetting hold of k-1th node
    }
    node *temp = curr->next;  // storing head->next
    curr->next  = head->next->next;
    delete temp;
    return head;
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
    head = deletekth(head,2);  //succesfully implemented
    printlist(head);
    return 0;

}
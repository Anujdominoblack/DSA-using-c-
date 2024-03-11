// the idea is copy data of next  node to head and then delink second node and link head with head->next
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
    if(head ->next == head){
        delete(head); //memory deallocation
        return NULL;
    }
   head->data =  head->next->data; //copying values
   node *temp = head->next;
   head->next = head->next->next;
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
    head = Deltehead(head);
    printlist(head);
    return 0;

}
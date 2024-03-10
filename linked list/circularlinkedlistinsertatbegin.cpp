// in this we will insert a node at begining of a circular linked list
#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int d)
    {
        data =d;
        next = NULL;
    }
};

node *insertatbegin(node *head,int x)
{  node *temp = new node(x);
   if(head==NULL)
   {
    return temp;
   }
   if(head->next==head)
   {
      temp->next = head;
      head->next = temp;
      return temp;
   }
   else{
         node *curr = head;
         // traval to node whose next is head
         while(curr->next!=head)
         {
             curr = curr->next;
         }
         curr->next = temp;
         temp->next = head;
   }
   return temp;

}

void printlist(node *head)
{
    if(head ==NULL)
    {
        return;
    }
    cout<<(head->data)<<" "; //printing head node
    for(node *p = head->next ; p!=head ;p=p->next) //writing condition
    {
        cout<<(p->data)<<" ";  //printing data
    }
}

// driver code
int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    head->next = temp1;
    temp1->next = head;
    head = insertatbegin(head,30);
    printlist(head);
    return 0;

}
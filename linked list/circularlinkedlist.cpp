//in circular linked list next of last node is head node
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

//driver code
int main()
{
    node *head = new node(20);
    head->next = new node(30);
    head->next->next = new node(40);
    head->next->next->next = new node(50);
    head->next->next->next->next = head; 
    printlist(head); //linking of circular linked list 
    return 0;
}
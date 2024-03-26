// idea is traverse the linked list and create two linked list one even and and one add
// add even nodes to even and odd nodes to odd
// at the end connect odd and even
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

node *segreggate(node  *head)
{
    node *es=NULL,*ee=NULL,*os=NULL,*oe=NULL;
    for(node *curr=head;curr!=NULL;curr=curr->next)
    {
        int x = curr->data;
        if(x%2==0)
        {
            if(es==NULL)
            {
                es=curr;
                ee=es; //for first node
            }
            else{
                ee->next=curr;  //adding node
                ee = ee->next;  //movingee
            }
        }
        else{
            if(os==NULL)
            {
                os=curr;
                oe=os;//for fist node
            }
            else{
                   oe->next = curr;
                   oe = oe->next;
            }
        }
    }
    // after the loop
    if(os==NULL || es==NULL)
    {
        return head;
    }
    ee->next = os;
    oe->next = NULL;
    return es;

}

void println(node *head){
    while(head!=NULL)
    {
        cout<<(head->data)<<" ";
        head = head->next;
    }

}

int main()
{
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(10);
    head = segreggate(head);
    println(head);
    return 0;
}
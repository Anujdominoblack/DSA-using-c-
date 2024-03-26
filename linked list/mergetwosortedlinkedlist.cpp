//we are making two pointer and and head and tail initially all will be at head 
// first we will set pointers at head and move one position ahead
// and we will then compare and insert elements at last
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

// function for merging
node *sortedmerge(node *a,node *b)
{
    if(a==NULL)
    {
        return b;
    }
    if(b==NULL)
    {
        return a;
    }
    node *head=NULL;
    node *tail=NULL;
    if(a->data <= b->data)
    {
        head = tail = a;
        a = a->next;
    }
    else{
        head=tail=b;
        b = b->next;
    }
    while(a!=NULL && b!=NULL)
    {
        if(a->data <=b->data)  // now we will add just 
        {
            tail ->next = a;
            tail = a;
            a=a->next;
        }
        else{
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }
    if(a==NULL)
    {
        tail->next = b;
    }
    else{
        tail->next = a;
    }
    return head;

}


void println(node *head){
    while(head!=NULL)
    {
        cout<<(head->data)<<" ";
        head = head->next;
    }

}

// driver code
int main()
{
    node *h1 = new node(5);
    node *temp = new node(10);
    h1->next = temp;
    temp->next = NULL;
    node *h2 = new node(6);
    node *temp1 = new node(10);
    h2->next = temp1;
    temp1->next = NULL;
    h1 = sortedmerge(h1,h2);
    println(h1);
    
    return 0;

}
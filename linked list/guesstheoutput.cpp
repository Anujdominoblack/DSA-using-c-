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

void printlist(node *head)
{
    while(head !=NULL)
    {
        cout<<(head->data)<<" ";
        head = head->next;
    }
}

// driver code
int main()
{
    node *head  = new node(10);
    printlist(head);
    printlist(head);
    return 0;
}
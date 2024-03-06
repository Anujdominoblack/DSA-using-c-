#include<iostream>
using namespace std;
//creating a linked list
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

// printing 
void printlist(node *head) //we pass a node to function
{
    node *curr = head; // creating a temporary code
    while(curr !=NULL)
    {
        cout<<(curr->data)<<" ";
        curr = curr->next; // moving current value to current next
    }
}

//driver code
int main()
{
    node *head = new node(30);
    head->next = new node(40); //node *temp1 = new node(); head->next = temp1;
    head->next->next = new node(50);
    printlist(head); // passing head to function 
    return 0;
}
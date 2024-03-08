// we are given head of a linked list and key to be searched in linked list our task is to find iit 
#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next =NULL;
    }
}; // linked list is created 

// function 
int searchlist(node *head,int x)
{
    int pos=1;
    node *curr = head;
    while(curr!=NULL)
    {
        if(curr->data==x)
        {
            return pos;
        }
        else{
            pos++;
            curr = curr->next;
        }
    }
    return -1;
}
// printing
void printlist(node *head)
{
    while(head!=NULL)
    {
        cout<<(head->data)<<" ";
        head = head->next;
    }
}

// driver code
int main()
{
    node *head = new node(10);
    head->next = new node(30);
    head->next->next = new node(40);
    int result = searchlist(head,30);
    cout<<result;
    return 0;
}


// the idea of implementation is
// if the list is empty return null
//if single node delete node retun null
// we have to make previous of second node nll 
#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
    node(int x)
    {
        data = x;
        next = prev = NULL;
    }
}; //linked list created

node *deletebegin(node *head)
{
    //writing corner case
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL)
    {
        delete(head); //deallocating memory
        return NULL;// retuning NULL
    }
    else{
        node *temp = head; // storing head
        head = head->next; //moved head to head next
        head->prev = NULL ;// as now it head node
        delete(temp); //deallocate memory
        return head;
    }

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

//writing driver code
int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);
    // three nodes created 
    // now we will do linking
    head->next = temp1;
    temp1->prev=head;
    temp1->next = temp2;
    temp2->prev = temp1;
    head = deletebegin(head);
    printlist(head);
    return 0;
}
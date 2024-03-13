// to detect loop we traverse the linked list and change the next of everynode to dummy node and if 
// next of anynode is dummy node then we will say there is a cycle

#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;// creating a next value
    node(int x)
    {
        data = x; //assinging value
        next = NULL; // making next as null
    }
};  //linked list is made succesfully 

//implementation
bool isloop(node *head)
{
    node *temp = new node(10) ;//dummy node is created
    node *curr = head;
    while(curr!=NULL)
    {
        if(curr->next==NULL){return false;}// means no cycle we reached end of linked list}
        if(curr->next == temp){return true;} //condition to detect loop
        node *curr_next = curr->next ;//storing the curr->next to not loose link
        curr->next = temp; //for dummy node
        curr = curr_next ;//goinng to next node
    }
}
//driver code
int main()
{
     node *head = new node(10);
    head->next = new node(15);
    head->next->next = new node(12);
    head->next->next->next = new node(20);
    head->next->next->next->next = head->next;
    int result = isloop(head);
    cout<<result;
    return 0;
}

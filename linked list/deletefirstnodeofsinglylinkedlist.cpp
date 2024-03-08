// we are given a singly linked list and we need to delete the first node
// to do so we need to chnage head to head next 
// we first store head next in temp varibale then we deallocate head and we return temp
#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x){
        data = x;
        next =NULL; // linked list is created 
    }
};

node *delfirst(node *head) //always return  new head
{   if(head == NULL){
    return NULL;}
    else{

    node *temp = head->next; //storing head next in temp 
    delete head; // deallocating memory
    return temp;
}
}
// printing linked list 
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
    node *head  =  new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head = delfirst(head);
    printlist(head);
    return 0;
}

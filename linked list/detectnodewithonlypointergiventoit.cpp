// in this we are given pointer or reference to node and we have to delete node
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

//void deletenode
void detnode(node *ptr)
{
    node *temp = ptr->next;
    ptr->data=temp->data;
    ptr->next = temp->next;
    delete(temp);//garbage collection
}
void println(node *head){
    while(head!=NULL)
    {
        cout<<(head->data)<<" ";
        head = head->next;
    }

}
//driver code
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    detnode(head->next->next);
    println(head);
    return 0;

}
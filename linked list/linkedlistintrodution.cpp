// we will see the simpler implementation of linked list
#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;  // creating a pointer next whose data type is same as structure
    node (int x)  // constructor to initialize a node and pointer null
    {  data = x;
       next = NULL;  // pointing next as null

    }

}; // this is a simplest linked list
// driver code
int main()
{
    node *head = new node(10); // pointer of type node and initialise as 10 
    node *temp1 = new node(20); // creating a temp pointer which has value 20
    node *temp2 = new node(30); //creating a temp2 pointer which has value 30

    head->next = temp1;  // as head is also pointer it uses ->
    temp1->next = temp2;
    return 0;
}
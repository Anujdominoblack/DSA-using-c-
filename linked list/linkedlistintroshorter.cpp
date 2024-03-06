#include<iostream>
using namespace std;

struct node{
   int data;
   node *next;// creating a pointing next
   node(int x)  // constructor
   { 
     data = x;
     next = NULL;
   }
};

// driver code
int main()
{
    node *head = new node(20); // dynamic allocation
    head->next = new node(40);
    head->next->next = new node(60);
    return 0;
}
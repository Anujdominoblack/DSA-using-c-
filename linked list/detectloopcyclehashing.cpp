#include<iostream>
#include<unordered_set>
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
    unordered_set<node *> s;
    for(node *curr=head;curr!=NULL;curr = curr->next)
    {
        if(s.find(curr)!=s.end())
        {
            return true;  //if previously inserted are found return true
        }
        s.insert(curr); //inserting nodes
    }
  return false;
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
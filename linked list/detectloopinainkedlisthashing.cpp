// in this we will use the hashing to check if cycle exist or not
#include<iostream>
#include<unordered_Set>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};//linked list is created

// loop for detecting hash
// the idea is if we didn't find a node that is already present we will push 
// otherwise if present return true
bool isloop(node *head)
{
    unordered_set<node *> s;
    for(node *curr=head;curr!=NULL;curr = curr->next)
    {
        if(s.find(curr)!=s.end())
        {
            return true;
        }
        s.insert(curr);
    }
    return false;
}
// now we will write the driver code
int main()
{
    node *head = new node(10);
    node *head1 = new node(20);
    node *head2 = new node(30);
    node *head3= new node(40);
    head->next = head1;
    head1->next = head2;
    head2->next = head3;
    head->next = head1;
    int result = isloop(head);
    if(result==0)
    {
        cout<<"there is no cycle in the linked list";
    }
    else{
        cout<<"there is cycle in the linked list";
    }
    return 0;

}
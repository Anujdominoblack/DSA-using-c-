// in this we will detect and remove the loop in a linked list
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
// the steps followed are
//1)detect cycle using floyd cycle
// 2)now after deteting loop move slow pointer to head and keep fast pointer at the same position 
// and now move both pointer at the same speed
// the point they will meet will be the first node of the cycle
void detectremoveloop(node *head)
{
    node *slow=head;
    node *fast=head;
    while(fast!=NULL && slow->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)
        {
            break;//cycle detected and breaked
        }
    }
    if(slow!=fast){return; }//no cycle is there}
    slow=head;//setting slow at the start
    while(slow->next!=fast->next)
    {
        // to remove loop we need to get hold of node which is the fist node of cycle as to remove it 
        slow = slow->next;
        fast=fast->next;
    }
    fast->next=NULL;  //loop succesfully removed

}

//driver code
int main()
{
    node *head = new node(10);
    node *head1 = new node(20);
    node *head2 = new node(30);
    node *head3= new node(40);
    head->next = head1;
    head1->next = head2;
    head2->next = head3;
    head3->next = head2;
   detectremoveloop(head);
    return 0;

}
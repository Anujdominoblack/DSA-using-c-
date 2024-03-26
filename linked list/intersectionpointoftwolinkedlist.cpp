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

// function for intersection
int getintersection(node *h1,node *h2)
{   node *curr1 = h1;
    node *curr2 = h2;
    while(curr1!=NULL && curr2!=NULL)
    {
        if(curr1==curr2)
        {
            return (curr1->data);
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return 0;
}

// driver code
int main()
{
    node *h1 = new node(5);
    node *temp = new node(10);
    h1->next = temp;
    temp->next = NULL;
    node *h2 = new node(6);
    node *temp1 = new node(10);
    h2->next = temp1;
    temp1->next = NULL;
    int result = getintersection(h1,h2);
    cout<<result;
    return 0;

}
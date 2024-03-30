//linked list implementation of stack
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
}; //linked list is created

struct mystack{
    node *head; //creating a node
    int sz;//it defines the position
    mystack()
    {
        head = NULL;
        sz=0; //defines the first node
    }
    void push(int x)
    {
        node *temp = new node(x);
        temp ->next = head;
        head = temp;
        sz++; //counting the nodes this is push operation
    }
    int pop()
    {
        // when popping we choose a end for popping 
        // this is done in these ways
        if(head==NULL){return INT16_MAX;}
        else{
            int res = head->data;  //getting element
            node *temp  = head;
            head = head->next;  // shifting head one position ahead
            delete(temp);  //memory deallocation
            sz--; 
            return res;
        }
    }
    int size()
    {
        return sz; // as we have created that for size
    }
    bool isempty()
    {
        return((head==NULL));//returning either true or false
    }
    int peek()
    {
        if(head==NULL){
            return INT16_MAX;
        }
        else{
            return head->data;
        }
    }
};
//driver code
int main()
{
    mystack s;
    s.push(10);//pushing element in stack
    s.push(20); //push element in stack
    s.push(100);
    cout<<s.pop(); //poping element from stack
    cout<<s.size(); //returning size of linked list
    return 0;
}
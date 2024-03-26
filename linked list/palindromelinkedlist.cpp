//in this we will check if a list is palindrome or not
/// we will do it using stack
#include<iostream>
#include<stack>
using namespace std;
struct node{
    char data;
    node *next;
    node(char x)
    {
        data = x;
        next = NULL;
    }
};
// we willl use naive method
bool ispalindrome(node *head)
{
    stack<char> st;
    for(node *curr = head;curr!=NULL;curr = curr->next)
    {
        st.push(curr->data);
    }
     for(node *curr = head;curr!=NULL;curr = curr->next)
    {
        if(st.top()!=curr->data);
        {
            return false;
        }
        st.pop();
    }
    return true;
}
//driver code
int main()
{   char g,f;
    node *head = new node(g);
    head->next = new node(f);
    head->next->next = new node(g);
    int  x  = ispalindrome(head);
    cout<<x;
return 0;
}
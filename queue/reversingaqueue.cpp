//to reverse a queue we have two solutions 
// let us first take iterative solution
// in this we copy from queue to stack and then again from stack to queue
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverse(queue<int> &q)  //pass by refrence to save memory
{
   stack<int> s;
   while(q.empty()==false)  //copying to stack
   {
        s.push(q.front());
        q.pop();

   }
   while(s.empty()==false){   //queue is successfully reversed here 
    q.push(s.top());  //copying to queue again
    s.pop();
   }   
}
// traversal
void traversal(queue<int> q)
{
    while(q.empty()==false)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}
//driver code
int main()
{
    queue<int> q;
    q.push(12);
    q.push(20);
    q.push(30);
    q.push(50);
    reverse(q);
    traversal(q);
    return 0;
}
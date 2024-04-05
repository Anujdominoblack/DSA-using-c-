// now we will implement the recursive solution to reverse a queue
// idea is pop the front element 
// store it 
// then reverse it recursively 
// and insert stored element again 
#include<iostream>
#include<queue>
using namespace std;

void reverse(queue<int> &q)
{
    if(q.empty()){
        return; //return back to controller
    }
    int x = q.front();//stroing front end element 
    q.pop(); //pop the front element 
    // now call the recurson
    reverse(q);
    // now push again
    q.push(x); // implemented 
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

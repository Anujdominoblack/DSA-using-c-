#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;  //creating queue
    q.push(10);
    q.push(20);
    q.push(30);
    while(q.empty()==false)  //traversing upto end 
    {
        cout<<q.front()<<" ";
        cout<<q.back()<<" ";
        q.pop();//popping elements
    }
    return 0;
}
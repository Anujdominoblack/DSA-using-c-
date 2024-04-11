#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> q ={10,15,30,5,12}; //deque created 
    auto it  = q.begin(); // getting hold of iterator at begin
    it++;
    q.insert(it,20);
    // inserts the value 20 before the position of iterator
    // iteratot at 2 it inserts at 1
    q.pop_back();
    q.pop_back();
    cout<<q.size();
    return 0;
}
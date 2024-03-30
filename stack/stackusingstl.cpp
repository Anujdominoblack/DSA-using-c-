// now we will implement stack using stl
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;//creating stack for integer variable
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    // we have pushed elements into the stack
    cout<<s.size()<<" ";
    cout<<s.top()<<" ";
    // now we will trvaerse the stack
    while(s.empty()!=true)
    {
        cout<<s.top()<<" ";
        s.pop(); //popping elements decreases stack size
    }
    return 0;
}
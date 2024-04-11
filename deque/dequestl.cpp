// now we will implement deque using stl
#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> dq ={10,20,30,40,50};  //deque created   
    dq.push_front(60);  //puhsed at front
    dq.push_back(70);   //pushed at back
    for(auto x : dq)  //iterating the deque
    { 
        cout<<x<<" ";
        cout<< dq.front()<<" "<<dq.back()<< " ";
    }
    return 0;
}

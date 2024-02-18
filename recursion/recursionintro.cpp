// a recursion is a way to write a programme in which function call itself
#include<iostream>
using namespace std;

void func1(){
    cout<<" fun\n";
}
void func2()
{
    cout<<"before function 2"<<" ";
    func1();
    cout<<" after function 2"<<" ";
}
int main()
{
    cout<<"before func2 "<<" ";
    func2();
    cout<<"after func2"<<" ";
    return 0;
}
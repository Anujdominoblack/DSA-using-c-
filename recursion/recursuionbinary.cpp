// in this we want to return binary equivalent of a number using recursion
#include<iostream>
using namespace std;

// now we will write recursion function
void fun1(int n)
{
    if(n==0){return;}
    fun1(n/2);
    cout<<(n%2)<<" ";
}

// driver code
int main()
{
    int n;
    cin>>n;
    // enter the number to get its binary representation
    fun1(n);
    return 0;
}
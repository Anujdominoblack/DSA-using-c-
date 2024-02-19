// in this we will implement fibbonaci series using recursion
#include<iostream>
using namespace std;

// now we will write recursion function
int fib(int n)
{
    if(n<=1){return n;}
    return fib(n-1)+fib(n-2);
}
// now we will write driver code
int main(){
    int n;
    cin>>n ;// enter the number whose fibbonaci is to be found
    int result = fib(n);
    cout<<" the fibbonaci is "<<result;
    return 0;
}
#include<iostream>
using namespace std;

int countdigits(long n)  //calculating the number of digits using recursion
{
    if(n==0)
    return 0;
    return 1+countdigits(n/10);  //recursion 
}
//driver code
int main()
{
    long n;
    cin>>n;
    int result=countdigits(n);  //function call
    cout<<result;  //output
    return 0;
}
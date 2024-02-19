// writing a fibbonaci series for finding sum of n natural numbers
#include<iostream>
using namespace std;

int getsum(int n)
{
    if(n==0){return 0;}
    return n+getsum(n-1);
}

// driver code
int main()
{
    int n;
    cout<<"enter the number upto which sum has to be found";
    cin>>n;
    int result = getsum(n);
    cout<<" the result of sum is "<< result;
    return 0;
}
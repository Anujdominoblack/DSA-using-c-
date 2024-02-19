// in this we have to find the sum of digits in a number using recursion
#include<iostream>
using namespace std;

// writing the recursive function
int getsum(int n)
{
    if(n==0){return 0;}
    return getsum(n/10)+n%10;
}

// driver code
int main()
{
    int n;
    cin>>n;
    int result = getsum(n);
    cout<<result;
    return 0;
}
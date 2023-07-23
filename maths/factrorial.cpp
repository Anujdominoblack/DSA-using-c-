#include<iostream>
using namespace std;

int factorial(int n)  //for calculating factorial
{
    int res=1;
    for(int i=1;i<=n;i++)
    {
        res=res*i;
    }
    return res;
}

// driver code
int main()
{
    int n;
    cin>>n;
    int result=factorial(n);
    cout<<result;
    return 0;
}
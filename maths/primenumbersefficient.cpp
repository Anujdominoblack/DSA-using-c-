// the idea is divisors always appears in pairs
// 30:(1,30),(2,15),(3,10)

// if (x,y) is a pair
// x*y=n;

#include<iostream>
using namespace std;

bool isprime(int n)
{
    if(n==1)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

//driver code

int main()
{
    int n;
    cout<<"enter the number you want to check";
    cin>>n;
    cout<<isprime(n);
    return 0;
}
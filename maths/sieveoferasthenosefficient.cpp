#include<iostream>
#include<vector>
using namespace std;

bool isprime(int n)
{
    for(int j=2;j*j<=n;j++)
    {
        if(n%j==0)
        {
            return false;
        }
    }
    return true;
}

void sieve(int n)
{
    vector<bool> isprime(n+1,true);
    for(int i=2;i*i<=n;i++)
    {
        if(isprime[i])
        {
        for(int j=2*i;j<=n;j+i)
        {
              isprime[j]=false;
        }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(isprime[i])
        {
            cout<<i<<" ";
        }
    }
}


//driver code
int main()
{
    int n;
    cin>>n;
    sieve(n);
    return 0;
}
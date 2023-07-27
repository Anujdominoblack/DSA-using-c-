#include<iostream>
using namespace std;

//void for prime

int prime(int n) //for checking prime
{   if(n==1)
{
    return false;
}
    for(int i=2;i*i<=n;i++)  //loop 
    {
        if(n%i==0)  //efficient
        {
            return false;
        }
    }
    return true;
}

void printprimes(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(prime(i))
        {
            if(n%i==0)
            {
                cout<<i<<" ";
            }
        }
    }
}

// driver code

int main()
{
    int n;
    cout<<"enter the number whose primefactors you want to check";
    cin>>n;
    printprimes(n);
    return 0;
}
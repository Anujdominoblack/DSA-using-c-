#include<iostream>
using namespace std;

int isprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
void primefactors(int n)
{
    for(int i=2;i<n;i++)
    {
        if(isprime(i))
        {
            int x=i;
            while(n%x==0)
            {
                cout<<x<<endl;;
                x=x+1; //this code is just for breaking the infinite loop
            }
        }
    }
}

//driver code

int main()
{
    int n;
    cin>>n;
    primefactors(n);
    return 0;
}
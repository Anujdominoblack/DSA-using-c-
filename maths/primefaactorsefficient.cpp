//idea is divisors always appear in pairs 
// for example 30:(1,30);(2,15);(3,10);(5,6)
// a number can be written as miltiplications of power of prime factors 
// for  12=2*2*3

#include<iostream>
using namespace std;

void printprimefactors(int n)
{
    if(n<1)
    {
        cout<<"";
    }
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            cout<<i<<endl;
            n=n/i;
        }
    }
    if(n>1)
    {
        cout<<n;
    }
}

//driver code

int main()
{
    int n;
    cin>>n; //enter the number you want to find the prime factors 
    printprimefactors(n);  //function call and result 
    return 0;
}


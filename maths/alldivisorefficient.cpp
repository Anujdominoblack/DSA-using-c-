//divisors always appears in pairs
// 30:(1,30)
// for a pair(x,y)
// x*x=n;
#include<iostream>
using namespace std;
void printdivisors(int n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
         

        }
    }
}

//driver code

int main()
{
    int n;
    cout<<"enter the number you want to find";
    cin>>n;
    printdivisors(n);
    return 0;
}
//here we will find computing power
#include<iostream>
using namespace std;

int power(int x,int n)
{
    int res=1;
    for(int i=0;i<n;i++)
    {
               res=res*x;
    }
    return res;
}

//driver code

int main()
{
    int n;
    int x;
    cout<<"enter whose number power you want to find";
    cin>>x;
    cout<<"enter the power;";
    cin>>n;
    cout<<power(x,n);
    return 0;
}
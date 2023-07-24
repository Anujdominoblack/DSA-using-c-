// the basic idea is that lcm is product of two numbers divided by the gcd

#include<iostream>
using namespace std;

int gcd(int a,int b) // function for finding gcd
{
    while(a!=b) //using euclidian algo
    {
        if(a>b)
        {
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}

int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}

//driver code

int main()
{
    int a,b;
    cout<<"enter the two numbers whose lcm is to be found";
    cin>>a>>b;
    int result=lcm(a,b);
    cout<<result;
    return 0;
}
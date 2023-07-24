#include<iostream>
using namespace std;

//function for finding the lcm of two numbers

int lcm(int a,int b)
{
    int res=max(a,b); // as lcm will be at least maximum of two number
    while(true)
    {
       if (res%a==0 && res%b==0) //the moment number is divisble by botht the paramters its our LCM
        {
            break;
        }
        else
        {
            res++;
        }
    }
    return res;

}

//driver code

int main()
{
    int a,b;
    cout<<"enter the two numbers ";
    cin>>a>>b;
    int result=lcm(a,b);
    cout<<result;
    return 0;
}
#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    int res=min(a,b); // as hcf or gcd will be minimum of two numbers
    while(res>0)
    {
        if(a%res==0 && b%res==0) //condition to be checked 
        {
            break;
        }
        res--;
    }
    return res;
}

int main()
{
    int a,b; //two variables are created
    cout<<"enter the two variables whose gcd you want to find out" ;
    cin>>a>>b; //inputs are taken 
    int result=gcd(a,b); //function call
    cout<<result; //output or result
    return 0;
}
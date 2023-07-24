// BASIC IDEA OF EUCLIDIAN ALGORITHM
// LET B BE THE SMALLER THAN A
// GCD(A,B)=GCD(A-B,B)
// A=GX AND B=GY AND GCD(X,Y)=1
// (A-B)=G(X-Y)

#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    while(a!=b) //when a is not equal to b
    {
        if(a>b)
        {
            a=a-b; //using euclidian algo
        }
        else
        {
            b=b-a; //using euclidian 
        }
    }
    return a;
}

//driver code

int main()
{
    int a,b;
    cout<<"enter the two numbers";
    cin>>a>>b;
    int result=gcd(a,b); //function call 
    cout<<result; //output
    return 0;
}

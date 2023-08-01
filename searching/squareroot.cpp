// naive solution of finding square root of a  number

#include<iostream>
using namespace std;

//function for calculating square root 

int square(int x)
{   int i=1;
    while(i*i<=x)
    {
        i++;
    }
    return (i-1);
}

//driver code

int main()
{
    int x;
    cout<<"enter the number whose square root you want to find";
    cin>>x;
    int result=square(x);  //function call
    cout<<result;
    return 0;
}


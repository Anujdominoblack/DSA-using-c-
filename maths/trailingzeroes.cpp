#include<iostream>
using namespace std;

int trailing(int n) //function for calculating the trailing zeroes
{
    int fact=1;;
    int res=0;
    for(int i=1;i<=n;i++)  //  for factorial
    {
        fact=fact*i;
    }
    while(fact%10==0)  // dividng by 10 if remainder is zero then there is a trailing zero
    {
        res++;
        fact=fact/10; //decreasing the number of digits 
    }
    return res;
}

// driver code

int main()
{
    int n;
    cin>>n;
    int result=trailing(n); // function call 
    cout<<result; //output 
    return 0;
}
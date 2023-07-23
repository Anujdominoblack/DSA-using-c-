#include<iostream>
#include<cmath>
using namespace std;

int countdigit(long n)
{
    return floor(log10(n)+1);  //calculating the lograthimic solution
}

//driver code

int main()
{
    long n; 
    cin>>n;  //digit input 
    int result=countdigit(n); //function call 
    cout<<result;  //output 
    return 0;
}
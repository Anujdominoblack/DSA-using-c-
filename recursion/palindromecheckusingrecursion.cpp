// the base case for this is if n==0 or n==1 return true

#include<iostream>
using namespace std;

bool ispalindrome(string str,int start,int end)
{
    if(start>=end){return true;}
    return ((str[start]==str[end])&&ispalindrome(str,start+1,end-1)); // it constantly checks;
}

// writing the driver code
int main()
{
    string s;
    cout<<"enter the string you want to check";
    cin>>s;
    cout<<ispalindrome(s,0,s.length());
    return 0;
}
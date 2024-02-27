// now we are implementing the same thing using the recursive approach
#include<iostream>
using namespace std;

// writing the function
bool issub(string s1,string s2,int n,int m)
{
    if(m==0)
    {
        return true;
    }
    if(n==0)
    {
        return false;
    }
    if(s1[n-1]==s2[m-1])
    {
        return issub(s1,s2,n-1,m-1);}

    else{
        return issub(s1,s2,n-1,m); // m will be same as we have matching second string
    }
    
}
//driver code
int main()
{
    string s1,s2;
    cout<<" enter the two string";
    cin>>s1>>s2;
    int result = issub(s1,s2,s1.length(),s2.length());
    if(result ==1)
    {
        cout<<"it is subsequence"<<" ";
    }
    else{
        cout<<" it is not subsequence"<<" ";
    }
    return 0;
}
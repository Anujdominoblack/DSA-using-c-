// we are given two strings s1 and s2 and task is to find whether string s2 is subsequence of string s1
// first we will implement naive algo
// the idea for the soution is we are going to two index and for both string 
// we will check character by charcater if they dont match move i++ if each move both
// loop terminates if string ends

#include<iostream>
using namespace std;

bool issub(string &s1,string &s2)
{
    int j=0;
    for(int i=0;i<s1.length() && j<s2.length();i++)
    {
      if(s1[i]==s2[j])
      {
        j++;
      }
    }
    return (j==s2.length()); // signfies all the charcaters of second string is present in first
}
// driver code
int main()
{
    string s1,s2;
    cout<<" enter the two string";
    cin>>s1>>s2;
    int result = issub(s1,s2);
    if(result ==1)
    {
        cout<<"it is subsequence"<<" ";
    }
    else{
        cout<<" it is not subsequence"<<" ";
    }
    return 0;
}
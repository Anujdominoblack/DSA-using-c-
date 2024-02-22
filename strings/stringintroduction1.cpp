// this is second part of string introduction
#include<iostream>
using namespace std;

int main()
{
    string s1="abc";
    string s2 ="bcd";
    if(s1==s2)
    {
        cout<<"same ";
    }
    else if (s1<s2){
        cout<<" second string is greater";
    }
    else{
        cout<<" second string is smaller";
    }
    return 0;
}
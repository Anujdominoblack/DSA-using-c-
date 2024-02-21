// we are going with string intro
#include<iostream>
using namespace std;

int main()
{
    string str = "anujdominoblack";
    cout<<str.length()<<" ";
    str = str+"xyz";
    cout<<str<< " ";
    cout<<str.substr(1,3)<<" ";
    cout<<str.find("domino")<<" ";
    return 0;

}
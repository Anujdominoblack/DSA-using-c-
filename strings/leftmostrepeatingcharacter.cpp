// we are given a string with possible repetation we need to find out left most character that repeats
// we will use naive algo first
#include<iostream>
using namespace std;

// function
int leftmost(string &str)
{
    for(int i=0;i<str.length();i++)  // iterating this 
    {
        for(int j=i+1;j<str.length();j++)  // and this checks for repeating character
        {
            if(str[i]==str[j])  // condition satisfied 
            {
              return i;  // it returns leftmost 
            }
        }
    }
    return -1; // no repetation of character
}
// driver code
int main()
{
    string str;
    cout<<" enter the string ";
    cin>>str;
    int result = leftmost(str);
    cout<<result;
    return 0;
}
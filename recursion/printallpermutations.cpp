// for a string of length there are n! permutaions
// we need to find all the permutations
// idea is we fix one character at a time
#include<iostream>
using namespace std;

// function to print the permuations
void permute(string s,int i=0)
{
    if(i==s.length()-1)  // base case which will check if permuation is  complete
    {
        cout<<s<<" ";
        return ;
    }
    for(int j=i;j<s.length();j++)
    {
        swap(s[i],s[j]);
        permute(s,i+1);
        swap(s[i],s[j]);
    }

}

// driver code
int main()
{
    string s;
    cin>>s;
    permute(s);
    return 0;
}
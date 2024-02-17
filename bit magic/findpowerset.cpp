// we will use the efficient approach
#include<iostream>
#include<cmath>
using namespace std;

void powerset(string str)
{
    int n= str.length();
    int powsize = pow(2,n);
    for(int i=0;i<powsize;i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i&(1<<j)!=0)
            {
               cout<<str[j];
            }
        }
        
    }

}

// driver code
int main()
{
    string s;
    cin>>s;
    powerset(s);
    return 0;
}
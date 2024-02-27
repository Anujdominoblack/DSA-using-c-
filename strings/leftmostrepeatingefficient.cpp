// the idea of efficient solution is similar to better 
#include<iostream>
#include<climits>
using namespace std;

const int max1=256;

int leftmost(string &str)
{
    int findex[max1];
    fill(findex,findex+max1,-1);  // array is filled with -1
    int res = INT_MAX;
    for(int i=0;i<max1;i++)
    {
        int fi = findex[i];
        if(fi==-1)
        {
            findex[str[i]]=i;  // filling element at position
        }
        else{
            res=min(res,fi);
        }
    }
    return (res==INT_MAX)?-1:res;
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

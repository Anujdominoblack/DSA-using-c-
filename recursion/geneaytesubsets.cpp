#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void subsets(vector<int> v,int i,vector<int> s)
{
   if(i==v.size())
   {
     for(int j=0;j<s.size();j++)
     {
        cout<<s[i];
     }
     return;
   }
   subsets(v,i+1,s);
   subsets(v,i+1,s.push_back(v[i]));
}
// driver code
int main()
{
    vector<int> v={1,2,3};
    vector<int> s;
    subsets(v,0,s);
    return 0;
}
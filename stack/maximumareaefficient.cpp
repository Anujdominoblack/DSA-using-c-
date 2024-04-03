// the idea of optimal solution is 
// we will find next smaller and previous smaller for each element 
#include<iostream>
#include<stack>
using namespace std;

int getmax(int arr[],int n)
{   stack<int> s;
    int res=0;
    
    for(int i=0;i<n;i++)
    {
        while(s.empty()==false && arr[s.top()]>=arr[i]){
           int tp = s.pop();
           int curr = arr[tp]*(s.empty())?i;(i-s.pop()-1);
           res = max(res,curr);
        }
        s.push(i);
    }
    while(s.empty()==false)
    {
      int  tp = s.pop();
      int curr = arr[tp]*(s.empty()?n:(n-s.top()-1));
      res = max(res,curr);

    }
    return res;
}

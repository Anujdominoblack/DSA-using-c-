// we are given an array we have to find the longest common subsequence which means elements just 1 greater 
// we will implement naive method first
// for naive solution we will use sorting method
#include<iostream>
#include<algorithm>
using namespace std;

int findlargest(int arr[],int n)
{
   // we will use sort function
   sort(arr,arr+n);
   int res=1,curr=1;
   for(int i=1;i<n;i++)
   {
    if(arr[i]==arr[i-1]+1)
    {
        curr++;
    }
    else{ res = max(res,curr);
        curr=1;
    }
   }
   res = max(res,curr);  // we have to do that
   return res;
}
// now we will call the driver code
int main()
{
    int arr[] = {1,9,3,4,2,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = findlargest(arr,n);  // we are doing function call 
    cout<<result;  // printing the result 
    return 0;
}
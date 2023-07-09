#include<iostream>
using namespace std;

int maximumdiff(int arr[],int n)  //function for finding the maximum difference
{int res=arr[1]-arr[0];
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
        res=max(res,arr[j]-arr[i]);  //it assigns res to maximum of res and array difference 
    }
  }
  return res;

}

int main()
{
    int arr[]={2,3,10,6,4,8,1};  //array is created
    int n=sizeof(arr)/sizeof(arr[0]);  //sizeof array
    cout<<maximumdiff(arr,n);  //result or output is displayed
    return 0;

}
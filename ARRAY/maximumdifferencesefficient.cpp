#include<iostream>
using namespace std;

int maxdiff(int arr[],int n)  //function for finding the maximum difference 
{
    int res=arr[1]-arr[0];
    int minval=arr[0];
    for(int j=0;j<n;j++)
    {
        res=max(res,arr[j]-minval);
        minval=min(minval,arr[j]);
    }
    return res;
}

int main()
{
    int arr[]={2,3,10,6,4,8,1};   //array is created
    int n=sizeof(arr)/sizeof(arr[0]);  //sizeofarray is declared 
    cout<<maxdiff(arr,n);  //result is displayed
    return 0;
}
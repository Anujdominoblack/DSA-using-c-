#include<iostream>
using namespace std;

int sliding(int arr[],int n,int k)
{
    int arr_sum=0;
    for(int i=0;i<k;i++)
    {
        arr_sum+=arr[i];  //sum of first k elements 
    }
    int max_sum=arr_sum;
    for(int i=k;i<n;i++)
    {
        arr_sum+=(arr[i]-arr[i-k]);  //adding one and then deleting one element 
        max_sum=max(max_sum,arr_sum);  //getting max of both
    }
    return max_sum;
}

//driver code
int main()
{
    int arr[]={1,8,30,-5,20,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=sliding(arr,n,3);
    cout<<result;
    return 0;
}

#include<iostream>
using namespace std;
int maxsum(int arr[],int n)
{
    int res=arr[0];
    int maxending=arr[0];
    for(int i=0;i<n;i++)
    {
        maxending=max(maxending+arr[i],arr[i]);
        res=max(res,maxending);
    }
    return res;
}

int main()
{
    int arr[]={-3,8,-2,4,-5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxsum(arr,n);
    return 0;

}
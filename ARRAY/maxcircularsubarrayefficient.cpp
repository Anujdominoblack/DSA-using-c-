#include<iostream>
using namespace std;

int normalmaxsum(int arr[],int n)
{
    int res=arr[0];
    int maxending=arr[0];
    for(int i=1;i<n;i++)
    {
        maxending=max(arr[i],maxending+arr[i]);
        res=max(res,maxending);
    }
    return res;
}

int overallmax(int arr[],int n)
{
    int maxnormal=normalmaxsum(arr,n);
    if(maxnormal<0)
    {
        return maxnormal;
    }
    int arr_sum=0;
    for(int i=0;i<n;i++)
    {
        arr_sum +=arr[i];
        arr[i]=-arr[i];
    }

    int maxcircular=arr_sum+maxcircular;
    return max(maxcircular,maxnormal);

}

int main()
{
    int arr[]={5,-2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result =overallmax(arr,n);
    cout<<result;
    return 0;
}
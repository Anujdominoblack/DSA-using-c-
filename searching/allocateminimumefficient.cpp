//this efficient approach is based on binary search technique
// we will find a range using binary search and calculate the value of mid and no student will read more than read 
//and by that we will check if solution is feasible or not 
// if feasible scarp the right part
// and now again find mid and do until find  a perfect answer
#include<iostream>
using namespace std;

//function for checking if feasible

bool feasible(int arr[],int n,int k,int ans)
{
    int req=1,sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+arr[i]>ans)
        {
            req++;
            sum=arr[i];
        }
        else
        {
            sum+=arr[i];
        }
    }
    return (req<=k);
}

// function for minimize maximum allocate 
int minpages(int arr[],int n,int k)
{
    int sum=0,mx=0;
    for(int i=0;i<n;i++)  // for finding two value of the range 
    {
        sum+=arr[i];
        mx=max(mx,arr[i]);
    }

    int low=mx,high=sum,res=0;  //implementing binary search for that 
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(feasible(arr,n,k,mid))
        {
            res=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return res;
}

//driver code

int main()
{
    int arr[]={10,20,10,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    int result=minpages(arr,n,k);
    cout<<result;
    return 0;
}
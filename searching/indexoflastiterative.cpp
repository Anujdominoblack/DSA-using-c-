//now we will solve using iterative 
#include<iostream>
using namespace std;

int last(int arr[],int n,int x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>x)
        {
            high=mid-1;
        }
        else if(arr[mid]<x)
        {
            low=mid+1;
        }

        else{
            if(mid==n-1 || arr[mid]!=arr[mid+1])
            {
                return mid;
            }
            else{
                low=mid+1; //discarding whole left subarray
            }
        }
    }
}

//driver code

int main()
{
    int arr[]={5,10,10,10,15,20,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    int result=last(arr,n,x);
    if(result==-1)
    {
        cout<<"element not present ";
    }
    else{
        cout<<"element present at"<<result;
    }
    return 0;
}
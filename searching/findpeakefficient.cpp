//we check middle is peak or not if(mid-1)>mid we go to left as peak will be there else peak will be in right 
#include<iostream>
using namespace std;

//function for finding peak

int getpeak(int arr[],int n)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid]))
        {
            return mid;
        }

        if(mid>0 && arr[mid-1]>=arr[mid])
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

//driver code
int main()
{
    int arr[]={5,20,40,30,20,50,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=getpeak(arr,n);
    cout<<result;
    return 0;
}
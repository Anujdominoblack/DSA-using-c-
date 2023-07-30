#include<iostream>
using namespace std;

//first we will write iterative solution and rest is same as recursive approach


int first(int arr[],int low,int high,int x)
{
    while(low<=high)
    {
        int mid=(low+high)/2;  
        if(arr[mid]>x)  //shifting high to one before mid
        {
            high=mid-1;
        }
        else if(arr[mid]<x)  //condition if shift low after mid
        {
            low=mid+1;
        }
        else
        {
            if(mid==0 || arr[mid-1]!=arr[mid])  // this condition is necessary  for discarding left sub 
            {
                return mid;
            }
            else{
                high=mid-1;  //for binary search in left sub
            }
        }
    }
}

//driver code

int main()
{
    int arr[]={5,10,10,10,15,20,20,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    int result=first(arr,0,n-1,x);
      if(result!=-1)
    {
        cout<<"element found at"<<result;  //output
    }
    else{
        cout<<"not found ";
    }
    return 0;
}
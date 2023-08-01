#include<iostream>
using namespace std;

int first(int arr[],int low,int high,int x)   //for counting the first occurences
{
    if(low>high){return -1;}
    int mid=(low+high)/2;
    if(arr[mid]>x)
    {
        first(arr,low,mid-1,x);
    }
    else if(arr[mid]<x)
    {
        first(arr,mid+1,high,x);
    }
    else{
        if(mid==0 ||arr[mid-1]!=arr[mid])
        {
            return mid;
        }
        else{
            first(arr,low,mid-1,x);
        }
    }
}

//driver code

int main()
{
    int arr[]={0,0,0,0,1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=first(arr,0,n-1,1); //first occureneces
    cout<<n-result;  //by subtracting we get total number of 1's
    return 0;
}
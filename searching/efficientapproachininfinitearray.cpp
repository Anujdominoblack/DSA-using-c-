#include<iostream>
using namespace std;

int binarysearch(int arr[],int x,int low,int high)
{
    if(low>high){return -1;}
    int mid=(low+high)/2;
    if(arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid]>x)
    {
        binarysearch(arr,x,low,mid-1);
    }
    else{
        binarysearch(arr,x,mid+1,high);
    }
}

// function for search

int search(int arr[],int x)
{
    if(arr[0]==x){return 0;}
    int i=1;
    while(arr[i]<x)
    {
        i=i*2;
    }
    if(arr[i]==x){return i;}
    return binarysearch(arr,x,i/2+1,i-1);
}

//driver code
int main()
{
    int arr[]={1,10,15,20,40,60,80,100,120};
     int result=search(arr,100);
     cout<<result;
     return 0;
}
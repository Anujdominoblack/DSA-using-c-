#include<iostream>
using namespace std;
// idea is we will find the first occurence and then last occurences of element and then we will subtract first occurence from last occurence 

int firstoccurence(int arr[],int low,int high,int x)
{
    if(low>high){return -1;}
    int mid=(low+high)/2;
    if(arr[mid]>x)
    {
        firstoccurence(arr,low,mid-1,x);
    }
    else if(arr[mid]<x)
    {
       firstoccurence(arr,mid+1,high,x);
    }
    else{
        if(mid==0 || arr[mid-1]!=arr[mid])
        {
            return mid;
        }
        else{
            firstoccurence(arr,low,mid-1,x);
        }
    }
}

int lastocc(int arr[],int n,int low,int high,int x)
{   
    if(low>high){return -1;}
    int mid=(low+high)/2;
    if(arr[mid]>x)
    {
        lastocc(arr,n,low,mid-1,x);
    }
    else if(arr[mid]<x)
    {
        return lastocc(arr,n,mid+1,high,x);
    }
    else{
        if(mid==n-1 ||arr[mid]!=arr[mid+1])
        {
            return mid;
        }
        else{
            lastocc(arr,n,mid+1,high,x);
        }
    }
}

int count(int arr[],int n,int x,int low,int high)  //this function mainly calculates the no of occurences by subtracting last by first 
{
    int first=firstoccurence(arr,low,high,x);
    if(first==-1)
    {
        return 0;
    }
    else{
        return(lastocc(arr,n,low,high,x)-first+1);
    }

}

//driver ocde

int main()
{
    int arr[]={10,10,10,10,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=count(arr,n,10,0,n-1);
    cout<<result;
    return 0;
}
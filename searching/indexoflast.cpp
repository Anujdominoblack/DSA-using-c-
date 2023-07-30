#include<iostream>
using namespace std;
 //recursive approach

 int last(int arr[],int low,int high,int x)
 {  int n=sizeof(arr)/sizeof(arr[0]);
    int mid=(low+high)/2;
    if(low>high)
    {return -1;}
     if(arr[mid]>x)
     {
        last(arr,low,mid-1,x);
     }
     else if(arr[mid]<x)
     {
        last(arr,mid+1,high,x);
     }
     else{
        if(mid==n-1 || arr[mid]!=arr[mid+1])  //for checking if its last occurence 
        {
            return mid;
        }
        else{
            last(arr,mid+1,high,x);//if not then we will discard the whole left and search on right starting from mid+1
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
    int result=last(arr,0,n-1,x);
      if(result!=-1)
    {
        cout<<"element found at"<<result;  //output
    }
    else{
        cout<<"not found ";
    }
    return 0;
}
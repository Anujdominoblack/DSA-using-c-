//now we will solve using receurisve approach of binary search

#include<iostream>
using namespace std;

int firstoccurences(int arr[],int low,int high,int x)
{   
    int mid=(low+high)/2;
    if(low>high){return -1;}
    
   
     if(arr[mid]>x)
     {
        firstoccurences(arr,low,mid-1,x);
     }
     else if(arr[mid]<x)
     {
        firstoccurences(arr,mid+1,high,x);
     }

     else{
        if(mid==0 || arr[mid-1]!=arr[mid])
        {
            return mid;
        }
        else{
            //if its equal to its previous restart searching discarding array starting from mid
            firstoccurences(arr,low,mid-1,x);
        }
     }

}

//driver code

int main()
{
    int arr[]={5,10,10,15,20,20,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    int result=firstoccurences(arr,0,n-1,x);
      if(result!=-1)
    {
        cout<<"element found at"<<result;  //output
    }
    else{
        cout<<"not found ";
    }
    return 0;
}
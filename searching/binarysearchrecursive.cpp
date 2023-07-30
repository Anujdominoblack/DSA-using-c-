//in the recursive approach we recursively called for the search ajusting high and low
//the complexity is O(logn)
//below is the implementation

#include<iostream>
using namespace std;
int binarysearch(int arr[],int low,int high,int x)
{  int mid=(low+high)/2;
    if(low>high)
    {
        return -1;
    }
    if(arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid]>x)  //function call if mid value is greater than search
    {
        binarysearch(arr,low,mid-1,x);
    }
    else
    {
        binarysearch(arr,mid+1,high,x);  // function call if arr[mid]<x 
    }

}

//driver code

int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90};  //array is created
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    int result=binarysearch(arr,0,n-1,x);  // function call
    if(result!=-1)
    {
        cout<<"element found at"<<result;  //output
    }
    else{
        cout<<"not found ";
    }
    return 0;
}



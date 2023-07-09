// naive solution we are using
#include<iostream>
using namespace std;
void rotateleft(int arr[],int n)  //for rotating
{
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

void rotated(int arr[],int n,int d)  //another function for roatating d times
{
    for(int i=0;i<d;i++)
    {
        rotateleft(arr,n);
    }
}

int main()
{
    int arr[]={1,2,3,4,5};  //array is created
    int n=sizeof(arr)/sizeof(arr[0]);   //size of array
    rotated(arr,n,2);  //function call
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";  //result
    }
    return 0;
}
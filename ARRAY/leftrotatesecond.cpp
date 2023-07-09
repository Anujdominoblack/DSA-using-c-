//method 2 
//idea : we first copy d elemennts into an array then we shift every element d position and then copy again
#include<iostream>
using namespace std;
void roatated(int arr[],int n,int d)
{
    int temp[d];
    for(int i=0;i<d;i++) //for copying d elements
    {
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++)
    {
        arr[i-d]=arr[i];  //for shifting d position back
    }
    for(int i=0;i<d;i++)
    {
        arr[n-d+i]=temp[i];
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d=2;
    roatated(arr,n,d);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
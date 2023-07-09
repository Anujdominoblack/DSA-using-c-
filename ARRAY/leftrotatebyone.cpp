#include<iostream>
using namespace std;

void leftrotateone(int arr[],int n)  //function to left rotate
{
    //idea is to store the first element of array then deleting and adding at the end

    int temp=arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    leftrotateone(arr,n);  //function call
    for(int i=0;i<n;i++)   // loop for output 
    {
        cout<<arr[i]<<" ";  //result
    }
return 0;
}
//applying efficient method
#include<iostream>
using namespace std;

void movezero(int arr[],int n)  //function for moving all zeroes to end
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        { 
            swap(arr[i],arr[count]);  //swap function is called
            count++;
        }
    }
}

int main()
{
    int arr[]={10,8,0,12,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    movezero(arr,n);  //function call
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";  //output
    }
    return 0;
}
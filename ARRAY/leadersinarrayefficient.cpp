#include<iostream>
using namespace std;
//idea is traversing from back and make last element as current and when we find the element greater than curr update curr
void leaders(int arr[],int n)  //function for leaders in an array
{
    int curr=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(curr<arr[i])
        {
            curr=arr[i];
            cout<<curr<<" ";  //result 
        }
    }
}

int main()
{
    int arr[]={10,6,11,5,9,2};  //array is created
    int n=sizeof(arr)/sizeof(arr[0]);   //sizeofarray
    leaders(arr,n);  //function call
    return 0;
}
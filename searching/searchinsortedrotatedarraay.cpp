//we will search for an element in an element which is sorted and rotated
#include<iostream>
using namespace std;

// we wll just do a linear search in an sorted aarray

int search(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}

//driver code

int main()
{
    int arr[]={10,20,30,40,50,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    int result=search(arr,n,x);  //searching function call
    cout<<result;
    return 0;
}
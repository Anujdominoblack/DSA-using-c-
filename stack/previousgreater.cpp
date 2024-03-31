// in this problem we are given an array of 
// distinct integers find closest (position wise ) greater on left of every element 
// if there is no greater element on left then print -1
// first we will implement naive solution
#include<iostream>
using namespace  std;

void printprevgreater(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j;// it is used for counter
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>arr[i])
            {
                cout<<arr[j]<<" ";
                break;
            }
        } 
        if(j==-1)
        {
            cout<<-1<<" ";// it will even eventually reach -1 desgining no gretaer on left 
        }

    }
}
//driver code
int main()
{
    int arr[]={15,10,18,4,6,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    printprevgreater(arr,n);
    return 0;
}

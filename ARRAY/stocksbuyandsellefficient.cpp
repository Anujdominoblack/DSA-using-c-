#include<iostream>
using namespace std;

int maxprofit(int arr[],int n)  //function created for finding the maximum profit 
{
    int profit=0;
    for(int i=0;i<n;i++)  //loops for traversal and finding the maximum profit 
    {
        if(arr[i+1]>arr[i])  //if condtion for finding the maxximum profit 
        {
            profit=profit+(arr[i+1]-arr[i]);  //profit 
        }
    }
    return profit;
}

int main()
{
    int arr[]={1,5,3,8,12};  //array is created
    int n=sizeof(arr)/sizeof(arr[0]);  //size of array
    cout<<maxprofit(arr,n);  //displaying the result
    return 0;
}
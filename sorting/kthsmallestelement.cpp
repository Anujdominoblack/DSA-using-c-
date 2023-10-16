// we are given an unsorted array and we have to find the kth smallest element
// naive approach first
#include<iostream>
#include<algorithm>
using namespace std;
// in first we will sort the unsorted array and then return the kth element 
int kthsmallest(int arr[],int n,int k)
{
    sort(arr,arr+n);
    return arr[k-1];
}

int main()
{
    int arr[]={10,5,30,12};
    int k=2;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = kthsmallest(arr,n,k);
    cout<<result;
    return 0;
}
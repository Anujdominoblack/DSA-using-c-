// we are given an array and we have to find element which appear n/k times
#include<iostream>
#include<algorithm>
using namespace std;

void printNbyK(int arr[],int n,int k)
{
    // we will sort the array first
    sort(arr,arr+n);
    int i=1,count=1;
    while(i<n)
    {
        while(i<n && arr[i] ==arr[i-1])  // for finding the elements 
        {
            count++;
            i++;
        }
        if(count>n/k){cout<<arr[i-1]<<" ";}  // checking the condition
        count=1;
        i++;
    }
}
// driver code
int main()
{
     int arr[] = {30,10,20,20,10,20,30,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    printNbyK(arr,n,4);
    return 0;
}
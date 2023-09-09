// merge sort is an divide and conqueror algorithm
// divides the input into two parts and then it recursively sorts them 
// and after sorting it combines or merges the result
// question:merge two sorted arrays
#include<iostream>
#include<algorithm>
using namespace std;
// first we will use naive method
// function for merging
void merge(int a[],int b[],int n,int m)
{
    // first we will create an empty array of size m+n
    int temp[n+m];
    //now we will fill values 
    for(int i=0;i<n;i++)
    {
        temp[i]=a[i];
    }
    // now we will fill remaining values
    for(int i=0;i<m;i++)
    {
        temp[n+i]=b[i];
    }
    //now as our array is filled we will sort the array
    sort(temp,temp+n+m);  // as n+m denotes the element beyond the last index
    for(int x : temp)
    {
        cout<<x<<" ";
    }

}
//driver code 
int main()
{
    int arr[]={10,20,30,40,50};
    int brr[]={2,5,51,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(brr)/sizeof(brr[0]);
    merge(arr,brr,n,m);
    return 0;
}

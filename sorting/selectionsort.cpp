// in selection sort we found out the minimum element we put it at first
// then we will find next minimum and place that in correct position
// and we will continue to do so

#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
// function for selections sort
void selectionsort(int arr[],int n)
{
    int temp[n];// an empty array for storing elements

    for(int i=0;i<n;i++)  // it decides which index is to filled
    {
      int min_indx = 0;
      for(int j=1;j<n;j++)
      {
        if(arr[j]<arr[min_indx])
        {
             min_indx=j;
        }
      }
      temp[i]=arr[min_indx];
      arr[min_indx] = INT_MAX;
    }
    //copying the array elements 
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

//driver code
int main()
{
    int arr[]={10,5,8,20,2,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    return 0;
}
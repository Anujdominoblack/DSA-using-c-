// in insertionsort we maintain a sorted part and one unsorted part we found a correct element 
// and insert it element already sorted part of array
// if we found element is greater then we move each element above it one place forward
#include<iostream>
#include<algorithm>
using namespace std;
// function for insertion sort
void insertionsort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i]; // for every element we are going to store it in a variable key
        int j=i-1; // and then we will got to left side and compare it to find correct position 
                 // if correct position if found we insert it in sorted array

        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=key;  // writing the key value to correct position

    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

//driver code
int main()
{
    int arr[]={45,56,87,02,10,651};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
    return 0;
}
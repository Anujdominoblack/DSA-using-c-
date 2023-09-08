#include<iostream>
#include<algorithm>
using namespace std;

// function for bubble sort 

void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)  // for number of passes
    {
        bool swapped = false;  // this is for checking if array is sorted or not
        for(int j=0;j<n-i-1;j++)  // as after each iteration max element goes to last 
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped==false)
        {
            break;
        }
    }
}  

    // driver code

    int main()
    {
        int arr[]={15,62,87,52,103};
        int n=sizeof(arr)/sizeof(arr[0]);
        bubblesort(arr,n);
        for(int x :arr)
        {
            cout<<x<<" ";
        }
        return 0;
    }
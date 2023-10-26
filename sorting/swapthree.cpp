// now we will efficient approach to sort 
#include<iostream>
#include<algorithm>
using namespace std;

void sort(int arr[],int n){
    // now we will use dutch flag algo
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high)   // we will do it then sorting algo
    {
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
       else if(arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

// now we will use driver code 
int main()
{
    int arr[]={0,0,2,1,0,1,0,2,1,0,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
// in optimised selection sort we dont iterate over the previosly minimum element that are placed at correct place
// that is after 1st pass we start from second index
#include<iostream>
#include<algorithm>
using namespace std;
// function for selection sort
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(arr[min],arr[i]);
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

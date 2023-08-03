//we will use binary search for that we will find middle and if mid is greater than corner then left array iss sorted else right is
#include<iostream>
using namespace std;

//function for searching  it normally use binary search

int searching(int arr[],int n,int x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]>arr[low]) //left is sorted
        {
            if(x>=arr[low] && x<arr[mid])
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{ if(x>arr[mid] && x<=arr[high])
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }}
    }
    return -1;
}

//driver code
int main()
{
    int arr[]={10,20,30,40,50,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=searching(arr,n,8);
    cout<<result;
    return 0;
}
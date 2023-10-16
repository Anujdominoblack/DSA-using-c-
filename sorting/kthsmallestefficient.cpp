// now we will use efficient method to find the kth smallest element 
// in this we will do partition if partition is equal to k-1 then return p otherwise do again partition
#include<iostream>
#include<algorithm>
using namespace std;
// now we will write our partition 1.e the lomuto partition
int partition(int arr[],int l,int h)
{
    int pivot = arr[h];
    int i =l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return(i+1);
}

// now we will write kth code
int kthsmallest(int arr[],int n,int k)
{
    int l=0;int r=n-1;
    while(l<=r)
    {
        int p =partition(arr,l,r);  // we will also binary search algo here also
        if(p==k-1){return p;}
        else if(p>k-1)
        {
            r=p-1;
        }
        else{
            l=p+1;
        }
    }
    return -1;
}

// driver code
int main()
{
    int arr[]={10,4,5,8,11,2,6};
    int n =sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int result = kthsmallest(arr,n,k); // returns the index of kth largest element 
    cout<<arr[result]; // output 
    return 0;
}
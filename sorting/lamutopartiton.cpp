// in lamuto partiton we choose the last element as pivot by default
// the the idea is we traverse through the whole array except last 
// while travelling from element from 0 to i will be smalle than pivot 
// and element from j to high will be greater than pivot
// in first we set i to l-1 and everytime element is lower than pivot we increase i and swap it
#include<iostream>
using namespace std;
// function for lamuto partiton
int lpartition(int arr[],int l,int h)
{
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<pivot)
        {   i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return (i+1);
}
// driver code
int main()
{
    int arr[]={10,80,30,90,40,50,70};
    int result=lpartition(arr,0,6);
    cout<<result;
    return 0;
}
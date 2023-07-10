#include<iostream>
using namespace std;
//this is the  naive solution for the trapping rain water problem 

int getwater(int arr[],int n)
{   int res=0;
    //in this we find the left max and  right max and then find the minimum of two and subtract the value of that index
    for(int i=0;i<n;i++)
    {
        int lmax=arr[i];
        for(int j=0;j<i;j++)   //finding the leftmax of i
        {
            lmax=max(lmax,arr[j]);
        }
        int rmax=arr[i];
        for(int j=i+1;j<n;j++)  //finding the rightmax of i 
        {
            rmax=max(rmax,arr[j]);
        }

        res=res+(min(lmax,rmax)-arr[i]);  //calculation of trapped water
    }
    return res;   //the complexity of this solution is O(n2)
}

int main()
{
    int arr[]={5,0,6,2,3};  //array is created
    int n=sizeof(arr)/sizeof(arr[0]);   //size of an array
    cout<<getwater(arr,n);  //function call and result is displayed
    return 0;
}


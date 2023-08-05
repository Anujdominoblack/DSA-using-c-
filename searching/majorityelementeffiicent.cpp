//in the efficient approach we will find  a candidate and then we will just for the candidate if there is such any candidate

#include<iostream>
using namespace std;

//function for checking majority and returning answer

int findmajority(int arr[],int n)
{
    int res=0,count=1;
    for(int i=1;i<n;i++)  // this loop is just for findig a candidate 
    {
        if(arr[res]==arr[i])
        {
            count++;
        }
        else{
            count--;
        }
        if(count==0)
        {
            res=i;
            count=1;
        }
    }
   count=0;
    for(int i=0;i<n;i++)   // for checking if candidate is actually is a majority or not 
    {
        if(arr[res]==arr[i])
        {
            count++;
        }
    }
    if(count>n/2)
    {
        return res;
    }
    return -1;
}

//driver code

int main()
{
    int arr[]={2,2,2,2,2,2,9,8,6,4,9,9,26,70,90,25,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=findmajority(arr,n);
    cout<<result;
    return 0;
}
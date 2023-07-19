#include<iostream>
using namespace std;

int findmajority(int arr[],int n)
{
    int res=0,count=1;
    for(int i=1;i<n;i++)  //to find the candidate
    {
        if(arr[res]==arr[i])
        {
            count++;
            
        }
        else{
            count--;
        }
        if(count==0){res=i;count=1;}
    }
    count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[res]==arr[i])
        {
            count++;
        }

    }
    if(count<=n/2)
    {
        return -1;
    }
    return res;
    
}

int main()
{
    int arr[]={8,8,6,6,6,6,4,6};  //array is created
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=findmajority(arr,n);  //function call
    cout<<result;  //output
    return 0;
}
#include<iostream>
using namespace std;

int majority(int arr[],int n)  //function for finding majority a majority is element whose value is greater than n/2
{
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++)
        {
           if(arr[i]==arr[j]);
           count++;}
           if(count>n/2)
           {
            return i;
           }
        
    }
    return -1;
}

int main()
{
    int arr[]={8,3,4,8,8};  //array is created
    int n=sizeof(arr)/sizeof(arr[0]);  //sizeofarray is declared
    int result=majority(arr,n);  //function call
    cout<<result;   //output
    return 0;
}
//idea create a  temporary array to store the elements then copy it
#include<iostream>
using  namespace std;
int revdups(int arr[],int n)
{
    int temp[n];
    temp[0]=arr[0];
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(temp[res-1]!=arr[i])  //checking if different elements are present
        {
            temp[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<n;i++)  //copying the elements
    {
        arr[i]=temp[i];  
    }
    return res;  //returning the effective sizeof the array
}

int main()
{
    int arr[]={10,20,20,30,30,30,30};  //array is created 
    int n=sizeof(arr)/sizeof(arr[0]);   //sieof the array
    int result=revdups(arr,n);  //result is displayed
    cout<<result;
    return 0;
}
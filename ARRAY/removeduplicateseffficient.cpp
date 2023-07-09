//
#include<iostream>
using namespace std;
//function for removing duplicates from an sorted array
int revduplicates(int arr[],int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}

//main code 

int main()
{
    int arr[]={10,20,20,30,30,30,30};  //array is created
    int n=sizeof(arr)/sizeof(arr[0]);  
    int result=revduplicates(arr,n);//function call
    cout<<result;  //result is being displayed
    return 0;
}

#include<iostream>
using namespace std;

int maxodd(int arr[],int n)  //function for traversal and finding maximum odd and even 
{
    int res=1;
    int curr=1;
    for(int i=1;i<n;i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0))
       { curr++;
        res=max(res,curr);}
        else{
            curr=i;
        }
    }
    return res;
}

int main()
{
    int arr[]={10,20,3,6,19};  //array is created
    int n=sizeof(arr)/sizeof(arr[0]);  //sizeof array
    cout<<maxodd(arr,n); //result 
    return 0;
}
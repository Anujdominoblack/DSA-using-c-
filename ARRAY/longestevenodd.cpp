#include<iostream>
using namespace std;

int maxodd(int arr[],int n)
{
    int res=1;
    for(int i=0;i<n;i++)  // first loop traversal
    {
        int curr=1;
        for(int j=i+1;j<n;j++)  //second loop traversal for finding even and odd
        {
            if((arr[j]%2==0 && arr[j-1]%2==0)||((arr[j])%2!=0 && (arr[j-1])%2==0))  //condition
            {
                curr++;
            }
            else
            {
                break;
            }
        }
        res=max(res,curr);
    }
    return res;
}

int main()
{
    int arr[]={5,10,20,6,3,8};  //array is created
    int n=sizeof(arr)/sizeof(arr[0]);   //sizeof array
    cout<<maxodd(arr,n); //result
    return 0;
}
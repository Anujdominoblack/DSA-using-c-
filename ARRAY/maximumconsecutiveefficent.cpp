//idea of efficient solution is traverse and if zero dont increase the count and reset it and if 1 increase the count
#include<iostream>
using namespace std;

int maxget(int arr[],int n)  //function 
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int curr;
        if(arr[i]==0)
        { curr=0;}
        else{
            curr++;
            res=max(res,curr);
        }
    }
    return res;
}

int main()
{
    int arr[]={1,0,1,1,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxget(arr,n);  //result 2
    return 0;
}
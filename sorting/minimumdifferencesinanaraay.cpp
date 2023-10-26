// let us find the minimu differences in an array
#include<iostream>
#include<algorithm>
using namespace std;

// now we will implement naive solution
int getmin(int arr[],int n)
{
    int res=INT16_MAX;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)   // we are just traversing and updating the result
        {
            res=min(res,arr[i]-arr[j]);
        }
    }
    return res;
}

// driver code
int main()
{
    int arr[]={5,3,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = getmin(arr,n);
    cout<<result;
    return 0;
}
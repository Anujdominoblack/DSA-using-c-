//now we will use efficient method
// sort the array  and then just find the neighbouring differences
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int getmin(int arr[],int n)
{
    sort(arr,arr+n);
    int res = INT_MAX;
    for(int i=1;i<n;i++)
    {
        res = min(res,arr[i]-arr[i-1]);
    }
    return res;
}

// driver code
int main()
{
    int arr[]={3,10,18,25};
    int n = sizeof(arr)/sizeof(arr[0]);   // it returns the minimum differences 
    int result = getmin(arr,n);
    cout<<result;
    return 0;
}
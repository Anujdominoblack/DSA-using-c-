// the efficient approach idea is xor operation
// xor gives zero if two same elements are in operation
// and returns second element if one is zero
#include<iostream>
using namespace std;

int findodd(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        res= res^arr[i];
    }
    return res;
}

// driver code

int main()
{
    int arr[]={4,3,4,4,4,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = findodd(arr,n);
    cout<<result;
    return 0;
}
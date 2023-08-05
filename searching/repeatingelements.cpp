// here in this problem we will find repeating elements in an supernaive solution
// O(n2) complexity
#include<iostream>
using namespace std;

int findmajority(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
       
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                return arr[i];
            }
        }
    }
    return -1;
}

//driver code

int main()
{
    int arr[]={0,2,1,3,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=findmajority(arr,n);
    cout<<result;
    return 0;
}

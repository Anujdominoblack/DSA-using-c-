// in this we will print maximum of all subarrays of size k
// this is the naive implementation
#include<iostream>
#include<algorithm>
using namespace std;

void printmaxk(int arr[],int n,int k)
{
    for(int i=0;i<n-k+1;i++)   //loop for calculating maximum of subarray
    {
        int max1 = arr[i];
        for(int j=i+1;j<i+k;j++)
        {
            max1 = max(arr[j],max1);
        }
        cout<<max1<< " ";
    }
}
//driver code
int main()
{
    int arr[]={10,8,5,12,15,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=3;
    printmaxk(arr,n,k);
    return 0;
}
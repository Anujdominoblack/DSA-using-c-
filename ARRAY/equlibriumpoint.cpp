#include<iostream>
using namespace std;

int equli(int arr[],int n)
{
    for(int i=0;i<n;i++)  //loop for traversal
    {
        int lsum=0,rsum=0;  //lsum and rsum
        for(int j=0;j<i;j++)  //calculating lsum
        {
            lsum+=arr[j];
        }
        for(int k=i+1;k<n;k++)  //calculating rsum
        {
            rsum+=arr[k];
        }
        if(lsum==rsum)  //condition
        {
            return i;
        }
    }
    return -1;
}
 //driver code
int main()
{
    int arr[]={3,4,8,-9,20,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<equli(arr,n);
    return 0;
}
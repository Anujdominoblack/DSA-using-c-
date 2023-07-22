#include<iostream>
using namespace std;

int prefix(int arr[],int n,int l,int r)
{int result;
    int prefix_sum[n];
    prefix_sum[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix_sum[i]=prefix_sum[i-1]+arr[i];  //creating prefix
    }
if(l!=0)
{
    result=prefix_sum[r]-prefix_sum[l-1];  //subtracting l-1 because the prefix r also contains sum of element upto l-1 also
}
else
{
    result=prefix_sum[r];
    
}
return result;}
//driver code
int main()
{
    int arr[]={2,8,13,22,28,33,37};
    int n=sizeof(arr)/sizeof(arr[0]);
    int l=1;
    int r=3;
    cout<<prefix(arr,n,l,r);
    return 0;
}
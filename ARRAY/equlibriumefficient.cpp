#include<iostream>
using namespace std;

bool equi(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];  //calculating sum
    }
    int l_sum=0;  // initialising lsum
    for(int i=0;i<n;i++)  //loop 
    {
        if(l_sum==sum-arr[i])  //if l sum is equal to rsum  and excluding arr[i] as it will not be including 
        {
            return true;
        }
        l_sum+=arr[i]; //increasing lsum and adding 
        sum-=arr[i];  //subtracting from total as right sum
    }
    return false;
}

//driver code

int main()
{
    int arr[]={3,4,8,-9,20,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<equi(arr,n);
    return 0;
}
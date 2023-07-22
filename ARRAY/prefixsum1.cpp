// prefix sum: given a fixed array and multiple queries of following types on the array

#include<iostream>
using namespace std;

int getsum(int arr[],int l,int r)  //function is created 
{  int sum=0;
    for(int i=l;i<=r;i++)  //calculating the sum 
    {  
        sum+=arr[i];

    }
    return sum;
}

//driver code
int main()
{
    int arr[]={2,8,3,9,6,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<getsum(arr,1,3);
    return 0;
}
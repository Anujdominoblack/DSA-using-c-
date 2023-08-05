// here we take consideration that the input array is already sortef
#include<iostream>
using namespace std;

int findmajority(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
       if(arr[i]==arr[i+1])
       {
        return arr[i];
       }
    }
    return -1;
}


// driver code

int main()
{int arr[]={0,1,2,2,2,3};
int n=sizeof(arr)/sizeof(arr[0]);
int result=findmajority(arr,n);
cout<<result;
return 0;

}
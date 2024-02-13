// this is naive method to find the pair of given sum in an array
#include<iostream>
using namespace std;

// writing the pair function 
bool ispair(int arr[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])==sum)
            {
                return true;
            }
        }
    }
    return false;
}

// writing the driver code
int main()
{
    int arr[]={3,2,8,15,-8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum;
    cin>>sum;
    int result  = ispair(arr,n,sum);
    if(result==1){cout<<"pair is found";}
    else{cout<<" pair is not found";}
    return 0;
}
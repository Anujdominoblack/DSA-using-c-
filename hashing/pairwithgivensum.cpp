#include<iostream>
using namespace std;

// writing the function
bool ispair(int arr[],int m,int sum)
{
    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(arr[i]+arr[j]==sum){return true;}  // naive approach
        }
    }
    return false;
}

// writing the driver code
int main()
{
    int arr[]={3,2,8,15,-5};
    int m = sizeof(arr)/sizeof(arr[0]);
    int sum;
    cin>>sum;
    int result = ispair(arr,m,sum);
    if(result==1){cout<<"yes";}
    else{cout<<"no";}
    return 0;
}
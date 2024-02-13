//we will use naive method first 

#include<iostream>
using namespace std;

bool isgiven(int arr[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {   int cur =0;
        for(int j=i;j<n;j++)
        {
            cur +=arr[j];
            if(cur==sum)
            {
               return true;
            }
        }
    }
    return false;
}

// driver code
int main()
{
    int arr[] = {5,8,6,13,3,-1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum;
    cin>>sum;
    int result = isgiven(arr,n,sum);
    if(result == 1){cout<<"given sum is present";}
    else{
        cout<<"given subarray sum is not present ";
    }
    return 0;
}
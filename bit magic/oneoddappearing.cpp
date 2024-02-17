// first we will implement naive solution
#include<iostream>
using namespace std;

void oddappearing(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int count =0;
        for(int j=0;j<n;j++)  // two loops for counting and updating purpose 
        {
            if(arr[j]==arr[i])
            {
                count++;
            }
        }
        if(count%2!=0)
        {
            cout<<arr[i]<<" ";
        }
    }
}

// driving code
int main(){

    int arr[]={4,3,4,4,4,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    oddappearing(arr,n);
    return 0;
}
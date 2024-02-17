// first we will approach the naive approach
#include<iostream>
using namespace std;

void oddappearing(int arr[],int n)  // two loops for traversing and counting
{
    for(int i=0;i<n;i++)
    {
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                count++;
            }
        }
        if(count%2!=0){cout<<arr[i]<<" ";}

    }
}

// driver code
int main()
{
    int arr[]= {3,4,3,4,5,4,4,6,7,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    oddappearing(arr,n);
    return 0;
}
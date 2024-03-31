// in this problem we will check the next greater element of element 
#include<iostream>
using namespace std;

void nextgreater(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                cout<<arr[j]<<" ";
                break; // as soon as we find a greater element we break the loop
            }

        }
        if(j==n)
        {
            cout<<-1<<" ";// when we reach index beyond last element we know it is largest
        }
    }
}
//driver code
int main()
{
    int arr[]={5,15,10,8,6,12,9,18};
    int n = sizeof(arr)/sizeof(arr[0]);
    nextgreater(arr,n);
    return 0;
}
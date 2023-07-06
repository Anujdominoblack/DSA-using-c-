#include<iostream>
using namespace std;

//function to check if the array is sorted or not

bool issorted(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int arr[5]={10,9,15,14};
    cout<<issorted(arr,5);  // prints zero for no and 1 for yes
    return 0;
}
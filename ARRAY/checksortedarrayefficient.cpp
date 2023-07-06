#include<iostream>
using namespace std;

bool issorted(int arr[],int n)  //function to check
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<issorted(arr,5); //0 for unsorted 1 for sorted
    return 0;
}
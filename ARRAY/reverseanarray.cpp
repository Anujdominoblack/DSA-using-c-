#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
    int low=0,high=n-1;
    while(low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int n=5;
    reverse(arr,n);   //function call
    for(int i=0;i<n;i++)  //result
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
// in this problem we are given an array of integers this array represnt the prices of a stock 
// on nth consecutive day 
// span means no of days including that day equal or less in less hand side

#include<iostream>
using namespace std;

void printspan(int arr[],int n)  // this is the naive implementation 
{
    for(int i=0;i<n;i++)
    {
        int span=1;
        for(int j=i-1;j>=0 && arr[j]<=arr[i];j--)
        {
            // we have to give condition inside the loop as it terminates upon encountering bigger element
            span++;         
        }
        cout<<span<<" ";
    }
}

//driver code
int main()
{
    int arr[]={13,15,12,14,16,8,6,4,10,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    printspan(arr,n);
    return 0;
}
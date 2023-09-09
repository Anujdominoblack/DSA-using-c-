// the idea of efficient solution is we are going to traverse both the arrays simultaneously with two index i and j
// i for first array and j is for second array
// now we will compare a[i] with b[j]  then we will have three cases
// a[i] <= b[j] then we will print a[i] and increase a[i] and again compare
// if b[j] is greater we will print b[j] and increase j and again compare
// if any array i or j goes beyond the last index we need to stop the loop 
#include<iostream>
#include<algorithm>
using namespace std;
void merge(int a[],int b[],int n,int m)
{
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(a[i]<=b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else 
        {
            cout<<b[j]<<" ";
            j++;
        }
    }
    // now as soon as the loon breaks print the remaining elements
    while(j<m)   // only one condition will evaluate to true 
    {
        cout<<b[j]<<" ";
        j++;
    }
    while(i<n)
    {
        cout<<a[i]<<" ";
        i++;
    }
}

// driver code

int main()
{
    int arr[]={2,10,15,21,22,27};
    int brr[]={1,9,16,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(brr)/sizeof(brr[0]);
    merge(arr,brr,n,m);
    return 0;

}
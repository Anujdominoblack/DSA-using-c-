// in this we will sort the array of three types
// for this we will take example of solving 0 1 and 2
// and now using naive solution we will implement that
#include<iostream>
#include<algorithm>
using namespace std;

void sort1(int arr[],int n)
{
    int temp[n];
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0){
            temp[j]=arr[i];
            j++;
        }

    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            temp[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==2)
        {
            temp[j]=arr[i];
            j++;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }
}

//main driver code
int main()
{
    int arr[]={0,1,0,2,0,0,1,2,2,0,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort1(arr,n);
    return 0;
}

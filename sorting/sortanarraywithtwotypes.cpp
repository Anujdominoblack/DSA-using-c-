// in this we will segregate positive and negative numbers
// we will implement naive solution
// first we will copy all negative in temproray array
// then we will copy all positive 
// and then we will copy temp array into main array

#include<iostream>
#include<algorithm>
using namespace std;

void segregate(int arr[],int n)
{
    int temp[n],i=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]<0)
        {
            temp[i]=arr[j];
            i++;
        }
    }
     for(int j=0;j<n;j++)
    {
        if(arr[j]>=0)
        {
            temp[i]=arr[j];
            i++;
        }
    }
    for(int j=0;j<n;j++)
    {
        arr[j]=temp[j]; //copying temp into main
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}


// driver code

int main()
{
    int arr[]={15,-3,-2,18};
    int n = sizeof(arr)/sizeof(arr[0]);
    segregate(arr,n);
    return 0;
}
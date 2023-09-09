#include<iostream>
using namespace std;

//we are first implmenting the naive solution

void inersection(int a[],int b[],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        if(i>0 && a[i]==a[i-1])   // for not repeating SAME ELEMENTS
        {            
            continue;
        }
        for(int j=0;j<n;j++)
        {
            if (a[i]==b[j])
            {
                cout<<a[i]<<" ";
                break;
            }
            
        }
    }
}

//driver code
int main()
{

    int arr[]={5,10,10,20,30};
    int brr[]={0,3,10,20};
    int m=sizeof(arr)/sizeof(arr[0]);
    int n=sizeof(brr)/sizeof(brr[0]);
    inersection(arr,brr,m,n);
    return 0;
}
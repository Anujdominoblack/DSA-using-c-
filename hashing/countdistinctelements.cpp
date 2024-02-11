#include<iostream>
using namespace std;

int countdist(int arr[],int n)  // this is naive soltuion 
{
    int res=0;
    for(int i=0;i<n;i++)  // ouer loop for traversing 
    {
        bool flag=false;
        for(int j=0;j<i;j++)  // inner loop for checking
        {
            if(arr[j]==arr[i])   // comapiring condition
            {
                flag = true;
                break;
            }
        }
        if(flag==false)  // counting 
        {
           res++;
        }
    }
    return res;
}

// driver code
int main()
{
    int arr[]={15,12,13,12,13,13,18};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = countdist(arr,n);
    cout<<result;
    return 0;
}
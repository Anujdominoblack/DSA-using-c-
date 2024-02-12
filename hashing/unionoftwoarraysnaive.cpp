// naive solution is copy the element of both the array into single array and then count distinct elements
#include<iostream>
using namespace std;
int unionof(int arr[],int brr[],int m,int n)
{
    int c[m+n];
    int res=0; // counter 
    for(int i=0;i<m;i++)
    {
        c[i]=arr[i];
    }
    // now we will fill the second array
    for(int i=0;i<n;i++)
    {
        c[m+i] = brr[i];
    } 
    // now both the array are succesfully copied
    for(int i=0;i<m+n;i++)
    {   bool flag = false;
        // checking for distinct elements
        for(int j=0;j<i;j++)
        {
            if(c[j]==c[i]) // checking for condition  of appeared before
            {
               flag = true;
               break;
            }
        }
        if(flag == false ){res++;}
    }
    return res;
}
// driver code 
int main()
{
    int arr[] = {10,15,20,15,30,30,5};
    int brr[] = {30,5,30,80};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(brr)/sizeof(brr[0]);
    int result;
    result =  unionof(arr,brr,m,n);  // function call 
    cout<<result;
    return 0;
}
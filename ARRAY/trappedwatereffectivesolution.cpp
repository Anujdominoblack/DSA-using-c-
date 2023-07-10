#include<iostream>
#include<algorithm>
using namespace std;

// this is effective solution with o(n)
// here lmax will be the arraystartin gtom  first element and rmax will be the array from  last element
// note if it does not run in your local machine try running in online compiler
int getwater(int arr[],int n)
{
    int lmax[n];
    int rmax[n];
    int res=0;

    lmax[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        lmax[i]=max(arr[i],lmax[i-1]); //we update the lmax with maximum of current and previous element 
    }
    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rmax[i]=max(arr[i],rmax[i+1]);  //we update rmax with maxium of current and next element 
    }

    for(int i=0;i<n;i++)
    {
          res=res+min(lmax,rmax)-arr[i];
    }

return res;

}

int main()
{
    int arr[]={5,0,6,2,3};   //array is created
    int n=sizeof(arr)/sizeof(arr[0]);  //sizeofarray
    cout<<getwater(arr,n); //output 
    return 0;
}
//count 1's naive solution 
#include<iostream>
using namespace std;

int main()  //naive solution
{
    int arr[]={0,0,0,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);  //counting size and number of elements
    int i;
    for( i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            break;
        }
    }
    
    cout<<(n-i);  //subtracting first index of i from size 
    return 0;

}
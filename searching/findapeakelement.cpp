//a peak element is an element which is not smaller than the neighbour
#include<iostream>
using namespace std;
//for finding peak element 
// this is a naive solution
int peak(int arr[],int n)
{
    if(n==1){return arr[0];}
    if(arr[0]>=arr[1]){return arr[0];}
    if(arr[n-1]>arr[n-2]){return arr[n-1];}

    //loop for finding 
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>=arr[i-1]&&arr[i]>=arr[i+1])
        {
            return arr[i];
        }
    }

}

//driver code

int main()
{
    int arr[]={5,10,20,15,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=peak(arr,n);
    cout<<result;
    return 0;
}
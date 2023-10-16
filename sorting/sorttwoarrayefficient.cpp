// now we will use efficient method and use partition and do sorting
#include<iostream>
#include<algorithm>
using namespace std;

void seg(int arr[],int n)
{
    int i=-1;
    int j=n;
    do{
        i++;
    }while(arr[i]<0);
    do{
        j--;
    }while(arr[j]>=0);

    if(i>=j){return ;}
    swap(arr[i],arr[j]);// swapping positive and negative values
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
//driver code
int main()
{
    int arr[]={-12,18,-10,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    seg(arr,n);
    return 0;
}
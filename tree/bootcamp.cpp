#include<iostream>
using namespace std;
void sorting(int arr[],int n)
{
    int count0=0;
    int count1=1;
    int count2=2;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0){count0++;}
        else if(arr[i]==1){count1++;}
        else{
            count2++;
        }
    }
    for(int i=0;i<count0;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<count1;i++){
        arr[i+count0]=1;
    }
    for(int i=0;i<count2;i++)
    {
        arr[i+count1+count0]=2;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
// driver main
int main()
{
    int arr[]={2,0,1,1,2,0};
    sorting(arr,6);
    return 0;
}
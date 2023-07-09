//idea :we will first rotate first d element 
//then we will roatate element from  d+1 to end
//then we will rotate the whole array

#include<iostream>
using namespace std;
void reverse(int arr[],int low,int high)  //function for reversing the array
{   int temp;
    while(low<high)
    {
        temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        high--;
        low++;
    }
}
void left(int arr[],int d,int n){  //function for d rotation call

    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);  //sizeofarray
    int d;  
    cin>>d;
    left(arr,d,n); //function call
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";  //output
    }
    return 0;
}

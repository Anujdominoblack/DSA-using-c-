//in this problem we find that if we get the given sum of subarray or not
#include<iostream>
using namespace std;

int check(int arr[],int n,int sum)   // function for naive approach solution
{ int given;
    for(int i=0;i<n;i++)  //first loop 
    {   
        for(int j=i;j<n;j++)   //second loop
        {
           given+=arr[i];  //sum of array
        }
        if(given==sum)
        {
            return true;
        }
    }
    return false;
}

//driver code

int main(){
    int arr[]={1,4,20,3,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=33;
    cout<<check(arr,n,sum);
    return 0;
}
#include<iostream>
using namespace std;

int  subsets(int arr[],int n,int sum)
{
       if(n==0){
          if(sum==0){
            return 0;
          }
          else{
            return 1;
          }
       }
       return subsets(arr,n-1,sum)+subsets(arr,n-1,sum-arr[n-1]);
       //one time including and one time not including array element 
}

// driver code
int main()
{
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=6;
    int result = subsets(arr,n,sum);
    cout<<result;
    return 0;
}
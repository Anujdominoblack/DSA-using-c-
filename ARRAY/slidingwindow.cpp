#include<iostream>
#include<climits>
using namespace std;

int window(int arr[],int n,int k)  //function for finding sum using sliding window using naive method
{
    int max_sum=0;
    for(int i=0;i+k-1<n;i++) //first loop for traversal
    {
        int sum=0;
        for(int j=0;j<k;j++) //loop for finding sum
        {
             sum=sum+arr[i+j];  //sum

        }
        max_sum=max(sum,max_sum);
    }
    return max_sum; //returning maximum sum

}

int main()
{
    int arr[]={1,8,30,-5,20,7}; //array is created
    int n=sizeof(arr)/sizeof(arr[0]);  //sizeofarray
    int result=window(arr,n,3);  //function call
    cout<<result; //output
    return 0;
}
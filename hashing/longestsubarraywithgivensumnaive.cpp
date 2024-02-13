// we are given an array which may contain any integer we need to find the longest subarray 
// with given sum
// the implementation of naive solution
#include<iostream>
using namespace std;

int maxlen(int arr[],int n,int sum)
{
    int res=0;
    for(int i=0;i<n;i++)
    {   int curr_sum=0;
        for(int j=i;j<n;j++)
        {
          curr_sum += arr[j];
          if(curr_sum==sum)
          {
            res = max(res,j-i+1);// j-i gives how many arrays gives the sum and we return max 
          }
        }
    }
    return res;

}
// now we will write the driver code 
int main()
{
    int arr[] = {5,8,-4,-4,9,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum;
    cin>>sum;
    int result = maxlen(arr,n,sum); // succesful function call 
    cout<<result;
    return 0;

}
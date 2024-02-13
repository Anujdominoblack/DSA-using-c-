// the question states that we are given two binary array we have to find longest common span with same sum
// their ending and starting should be same

// first we will implement the naive solution
#include<iostream>
using namespace std;

int maxcommon(bool arr[],bool brr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int sum1=0,sum2=0;
        for(int j=i;j<n;j++)
        {
            sum1+=arr[j];  // first sum
            sum2+=brr[j];  // second sum
            if(sum1==sum2)
            {
                res = max(res,j-i+1); // j-i means j is last occurence and i is first and +1 gives count
            }
        }
    }
    return res;
}

// driver code
int main()
{
    bool arr[] ={0,1,0,0,0,0};
    bool brr[] ={1,0,1,0,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = maxcommon(arr,brr,n);
    cout<<result;
    return 0;
}
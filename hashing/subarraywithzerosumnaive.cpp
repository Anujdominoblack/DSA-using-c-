// subarray with zero sum 
// we are given an array we have to find if there is an array with zero sum
// first the niave method will be implemented
#include<iostream>
using namespace std;

bool is0(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int curr_sum=0;
        for(int j=i;j<n;j++)  // as array is contigious allocation 
        {
            curr_sum += arr[j]; // incrementing the counter 
            if(curr_sum==0)  // checking the zero subarray condition
            {
                return true;
            }
        }
    }
    return false;
}

// driver code
int main()
{
    int arr[]= {1,4,3,-3,-10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = is0(arr,n); // function call and result is stored 
    if(result==1){cout<<"zero sum is there ";}
    else{
        cout<<"no zero sum";
    }
    return 0;

}
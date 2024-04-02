// in this problem we will find rectangle with  
#include<iostream>
using namespace std;

int getmax(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int curr = arr[i];
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]>=curr)
            {
                curr+=curr; //adding same value
            }
            else{
                break;
            }
        }
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>=curr)
            {
                curr+=curr;//adding same value
            }
            else{
                break;
            }
        }
        res = max(res,curr);
    }
    return res;
}
//driver code
int main()
{
    int arr[]={6,2,5,4,1,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = getmax(arr,n);
    cout<<result;
    return 0;
}
//succesfully implemented
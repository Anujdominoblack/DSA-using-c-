#include<iostream>
using namespace std;

int circularmax(int arr[],int n)  //function for circular max
{
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        int curr_max=arr[i];
        int curr_sum=arr[i];
        for(int j=1;j<n;j++)
        {
            int index=(i+j)%n;
            curr_sum +=arr[index];
            curr_max=max(curr_max,curr_sum);
        }
        res=max(res,curr_max);

    }
    return res;

}

int main()
{
    int arr[]={5,-2,3,4};  //array is created
    int n=sizeof(arr)/sizeof(arr[0]);  //sizeof array
    cout<<circularmax(arr,n);  //function call
    return 0;
}
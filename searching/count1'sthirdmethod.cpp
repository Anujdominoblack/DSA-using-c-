//this method is also impelmented using binary search but its a  little clean code having time complexity of O(log(n))

#include<iostream>
using namespace std;

int countones(int arr[],int n)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==0)
        {
            low=mid+1;
        }
        else{
            if(mid==0 ||arr[mid-1]!=arr[mid])
            {
                return (n-mid);
            }
            else{
                high=mid-1;
            }
        }
    }
}

//driver code

int main()
{
    int arr[]={0,0,0,0,1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=countones(arr,n);
    cout<<result;
    return 0;

}
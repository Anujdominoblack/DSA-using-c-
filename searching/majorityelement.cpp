// here we will find majority element by a naive solution where we will compare elements and then increase if count increase by n/2
// then we can there is a majority element 
#include<iostream>
using namespace std;

//function for naive solution
int majority(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {  int count=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>n/2)
        {
            return i;  // returns the index of majority element 
        }

    }
    return -1;  // returns negative if no such element is present 
}
// driver code

int main()
{
    int arr[]={2,2,2,3,2,2,2,4,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=majority(arr,n);
    cout<<result;
    return 0;
}
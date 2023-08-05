//given an unsorted array and a number x, we need to fin if there is apair in the array
//naive solution
#include<iostream>
using namespace std;

//two pointer function
int search(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==x);
            return true;
        }
    }
    return false;
}

//driver code

int main()
{
    int arr[]={10,20,30,40,50,60,70};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    int result=search(arr,n,x);  // function call
    cout<<result;  //output
    return 0;
}

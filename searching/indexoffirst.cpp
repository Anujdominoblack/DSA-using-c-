//this problem searches for first occurence of any element in the array

//naive solution O(n)

#include<iostream>
using namespace std;

//driver code

int main()
{
    int arr[]={10,20,20,20,20,30,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    for(int i=0;i<n;i++)  //it does the linear search 
    {
        if(arr[i]==x)  //condition check
        {
            cout<<"first occurence is at "<<i;
            break;
        }
    }
    return 0;
}
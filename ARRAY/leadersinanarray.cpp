//the problem states that find elements whom right of it there is no greater than element 

#include<iostream>
using namespace std;

void leaders(int arr[],int n)  //function to find the leaders in the array
{
    for(int i=0;i<n;i++)
    {
        bool flag =false;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<=arr[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            cout<<arr[i]<<" ";  //output for the leaders of the array
        }
    }
}

int main()
{
    int arr[]={7,10,4,3,6,5,2}; //array
    int n=sizeof(arr)/sizeof(arr[0]);  //sizeof array
    leaders(arr,n);  //function call
    return 0;
}
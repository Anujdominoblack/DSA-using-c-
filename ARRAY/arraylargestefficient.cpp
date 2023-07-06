#include<iostream>
using namespace std;
int largest(int arr[],int n)
{
    int res=0;
    for(int i=1;i<n;i++)  //loop for the traversal and finding the largest element
    {
        if(arr[i]>arr[res])
        {
            res=i; //efficient method
        }
    }
    return res;
}

int main()
{
    int arr[5]={10,12,9,15,4};
    int result=largest(arr,5); //function call
    cout<<arr[result];  //printing the result 
    return 0;
}
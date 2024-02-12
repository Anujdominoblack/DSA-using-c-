// we are given an array and we have to find the frequencies of array elements
// idea : is traverse elements 
#include<iostream>
using namespace std;

void printfreq(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag = false;
        for(int j=0;j<i;j++) // for checking if appeared before or first element 
        {
            if(arr[j]==arr[i])
            {
                flag = true;
                break;
            }
        }
        if(flag==true){continue;} //it is used to check if its not first occurence
        int freq=1;
        for(int j=i+1;j<n;i++)  // it checks for elements 
        {
            if(arr[i]==arr[j])
            {
                freq++;
            }
        }
        cout<<arr[i]<<" ";
    }
}

// driver code
int main()
{
    int arr[]={10,12,10,15,10,20,12,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    printfreq(arr,n);
    return 0;
}
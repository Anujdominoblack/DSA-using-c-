#include<iostream>
#include<algorithm>
using namespace std;
// now we will improve our bubble sort code
// function for bubble sort
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++) // loop for number of passes
    {
         for(int j=0;j<n-i-1;j++)  // as after each pass max element goes to last and so we can exclude last elements
         {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);  // swapping functions
            }
         }
    }
}

//driver code
int main()
{
    int arr[]={19,2,20,87,63,200,48,14};
    int n=sizeof(arr)/sizeof(arr[0]);  // array size
    bubblesort(arr,n);  // function call
    for(int x :arr)
    {
        cout<<x<<" "; // output
    }
    return 0;
}
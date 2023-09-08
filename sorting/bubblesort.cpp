// bubble sort is used to sort the input array complexity is O(n2) 
// we pass n-1 passes 
// in 1st pass we pass element to last position
// in second pass we pass the element to second last position
// we keep doing it so 

#include<iostream>
#include<algorithm>
using namespace std;

void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)  // for number of passes
    {
        for(int j=0;j<n-1;j++)  // for elements and uto n-1 as we have j+1 condition
        {
              if(arr[j]>arr[j+1])
              {
                swap(arr[j],arr[j+1]);
              }
        }
    }
}

// driver code
int main()
{
    int n;
    cin>>n;  // enter the size of array
    int arr[n];
    cout<<"enter the array elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    // calling the bubble sort function
    bubblesort(arr,n);
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    return 0;

}
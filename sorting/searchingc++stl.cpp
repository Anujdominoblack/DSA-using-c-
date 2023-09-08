#include<iostream>
#include<algorithm>
using namespace std;

// driver code
int main()
{  int  n=0;
   cin>>n;  // enter the size of array
   int arr[n];
   cout<<"ENTER WHICH ELEMENTS YOU WANT TO INSERT INTO ARRAY";
   for(int i=0;i<n;i++)
   {
    cin>>arr[i]; // enter the array elements
   }
   sort(arr,arr+n);  // calling  the sort functions to sort the array paramters are first index and index beyond last element 
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
  return 0;
}
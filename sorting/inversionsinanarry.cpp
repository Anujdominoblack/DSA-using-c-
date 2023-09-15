// a pair a[i],a[j] is said to be inversion when i<j and a[i]>a[j]
// our first approach  is a naive solution 
// in this we will travel through array and increase a counter for that
#include<iostream>
using namespace std;
// function for counting inversion
int countinversion(int arr[],int n)  //  arguments are input array and size of array
{
  int res=0;
  for(int i=0;i<(n-1);i++)
  {
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]>arr[j])
        {
            res++;
        }
    }
  }
  return res;
}

//driver code
int main()
{
    int n;
    cin>>n; // enter the size of array
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i]; // enter the array elements
    }

    // doing function call
    int result = countinversion(arr,n);
    // printing out the result
    cout<<result;
    return 0;
}
//binary search works on sorted array only in binary search we search for the mid element if array[mid] is greater
// then we will remove half the array including math

#include<iostream>
#include<algorithm>
using namespace std;

//function for binary search

int binarysearch(int arr[],int n,int x)
{
   int low=0,high=n-1;
   while(low<=high)
   {
       int mid=(low+high)/2;
       if(arr[mid]==x)
       {
        return mid;
       }
       else if(arr[mid]>x)  // as mid value is greater then discard whole array starting from mid to extreme and make high=mid-1
       {
            high=mid-1;
       }
       else{   // as mid is less than x we discard whole array from startign to mid
        low=mid+1;
       }
   }
   return -1;
}

//driver code

int main()
{
    // array always works on sorted array
    int arr[]={10,20,30,40,50,60,70,80,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"enter the element you want to search in the array";
    cin>>x;
    int result=binarysearch(arr,n,x);
    if(result!=-1)
    {
        cout<<" the element is present in position "<<result+1;
    }
    else{
        cout<<"no element is found";
    }
return 0;
}
#include<iostream>
using namespace  std;

//function for finding
int findrepeat(int arr[],int n)
{
    int slow=arr[0],fast=arr[0];
    do{
        slow=arr[slow];  //moving one
        fast=arr[arr[fast]];  //moving two
    }
    while(slow!=fast);
   slow=arr[0];
   while(slow!=fast)
   {
     slow=arr[slow];
     fast=arr[fast];
   }
   return slow;

}

//driver code

int main()
{
  int arr[]={1,2,4,6,5,7,3};
  int n=sizeof(arr)/sizeof(arr[0]);
  int result=findrepeat(arr,n);
  cout<<result;
  return 0;
}
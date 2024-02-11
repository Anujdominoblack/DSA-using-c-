#include<iostream>
#include<unordered_set>
using namespace std;
// in efficient solution enter element in unordered set and return its size
void coutdisnt(int arr[],int n)
{
   unordered_set<int> s;
   for(int i=0;i<n;i++)
   {
    s.insert(arr[i]);
   }
   cout<<s.size();
}

// now writing the driver code
int main()
{
    int arr[]={15,12,13,13,12,13,13,18};
    int n = sizeof(arr)/sizeof(arr[0]);
    coutdisnt(arr,n);  // function call 
    return 0;
}
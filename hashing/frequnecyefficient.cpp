// the idea of the efficient solution is to use the map in which element is key and frequency is their value 
#include<iostream>
#include<unordered_map>
using namespace std;

void printfequ(int arr[],int n)
{
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;  // to increase the value initally all the value will be zero
        // inserting element into map
    }
    for(auto x : m)  // we use pointer to print value 
    {
        cout<<x.first<<" "<<x.second<<" "; // first returns key second return value
    }

}
// driver code
int main()
{
    int arr[] = {50,50,10,40,10};
    int n =  sizeof(arr)/sizeof(arr[0]);
    printfequ(arr,n);
    return 0;
}
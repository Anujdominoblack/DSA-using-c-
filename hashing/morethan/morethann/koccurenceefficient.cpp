#include<iostream>
#include<unordered_map>
using namespace std;

// writing function to demonstrate that 
void printNbyK(int arr[],int n,int k)
{
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;  // inserting eleemnts in hashmap
    }
    for(auto e : m)
    {
        if(e.second>n/k){
            cout<<e.first<<" ";
        }
    }
}
//driver code
int main()
{
     int arr[] = {30,10,20,20,10,20,30,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    printNbyK(arr,n,4);
    return 0;
}
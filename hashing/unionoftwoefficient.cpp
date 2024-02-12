// effiecien solution is use set and then push both arrays into that and return it size as set don't contain duplicate element 
#include<iostream>
#include<unordered_set>
using namespace std;

int unionof(int arr[],int brr[],int m,int n)
{
    unordered_set<int > s;
    for(int i=0;i<m;i++)
    {
        s.insert(arr[i]);
    }
    // now insert elemnt of second array
    for(int j=0;j<n;j++)
    {
        s.insert(brr[j]);
    }
    // now just return size 
    return s.size();

}
// driver code
int main()
{
    int arr[] = {10,15,20,15,30,30,5};
    int brr[] = {30,5,30,80};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(brr)/sizeof(brr[0]);
    int result;
    result =  unionof(arr,brr,m,n);  // function call 
    cout<<result;
    return 0;
}
// the above condition is effient and optimal solution
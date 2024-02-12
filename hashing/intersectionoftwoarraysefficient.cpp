// now we will implement efficient solution using set 
#include<iostream>
#include<unordered_Set>
using namespace std;

int intersection(int arr[],int brr[],int m,int n)
{   int res=0;// counter
    unordered_set<int > s;
    for(int x=0;x<m;x++)
    {
        s.insert(arr[x]);  // inserting element of first array in set
    }

    // now we will search for element of second array in set
    for(int i=0;i<n;i++)
    {
        if(s.find(brr[i])!=s.end())
        {
           res++;
           s.erase(brr[i]); // as we  have matched we remove the element to avoid duplication 
        } 
    }
    return res;
}

// driver code
int main()
{
   int arr[] = {10,15,20,15,30,30,5};
    int brr[] = {30,5,30,80};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(brr)/sizeof(brr[0]);
    int result;
    result =  intersection(arr,brr,m,n);  // function call 
    cout<<result;
    return 0;
}
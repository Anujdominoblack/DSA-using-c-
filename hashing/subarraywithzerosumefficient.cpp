// the idea of efficient solution is use hashing and presum is 
// the idea of presum is when we have a subarray with zero sum 
// then arr[i:j] is zero that means array from 0 to i and array from 0 to j have same sum
// to we find prefix for each element and put it in hash if we get same prefixsum then condition satisfied
// and we can say zero sum is there
#include<iostream>
#include<unordered_set>
using namespace std;

bool is0sum(int arr[],int n)
{   int prefix=0;
    unordered_set<int> s; // unoredered set created for hash storing 
    for(int i=0;i<n;i++)
    {
        prefix +=arr[i];
        if(s.find(prefix)!=s.end())
        {
           return true;
        }
        if(prefix==0){return true;} // explicit condition to handle 
        s.insert(prefix);

    }
    return false;
}
// now we will write the driver code 
int main()
{
    int arr[]={-3,4,-3,-1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = is0sum(arr,n);
    if(result==1){cout<<"zero sum subarray is present";}
    else{
        cout<<"zero sum subarray is not present ";
    }
    return 0;
}

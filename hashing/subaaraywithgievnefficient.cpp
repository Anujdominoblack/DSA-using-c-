// the efficient approach to implement this is also using hashing and prefixsum
#include<iostream>
#include<unordered_set>
using namespace std;

bool isgivensum(int arr[],int n,int sum)
{
    // the idea is if presum - sum is present in hash that means sum exist and return true
    // otherwise insert the presum in hash
    unordered_set<int> s;
    int prefixsum = 0;
    for(int i=0;i<n;i++)
    {
        prefixsum += arr[i];
        if(s.find(prefixsum-sum) != s.end())  // if this present that means subarray sum is present 
        {
            return true;
        }
        if(prefixsum ==sum){return true;} // boundary condition check
        // if not insert it 
        s.insert(prefixsum);
    }
    return false;
}

// driver code
int main()
{    int arr[]={5,8,6,13,3,-1};
     int n = sizeof(arr)/sizeof(arr[0]);
     int sum;
     cin>>sum;
     int result=isgivensum(arr,n,sum);
    if(result == 1){cout<<"given sum is present";}
    else{
        cout<<"given subarray sum is not present ";
    }
    return 0;
}
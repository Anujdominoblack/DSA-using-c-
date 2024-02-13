// now the efficient solution is using unordered set
// the idea is check if sum - that element is present in set if present return true
// if not present insert it 
#include<iostream>
#include<unordered_Set>
using namespace std;

bool ispair(int arr[],int n,int sum)
{
    // create unordered set
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        if(s.find(sum-arr[i])!=s.end())  // if sum -arr[i] is present that means it will be a pair 
        {
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}
//driver code
int main()
{
    int arr[]={3,2,8,15,-8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum;
    cin>>sum;
    int result = ispair(arr,n,sum); // function call and storing result 
    if(result==1){cout<<"pair is present ";} // bool returns either 1 or zero
    else{
        cout<<"no pair is present ";
    }
    return 0;


}
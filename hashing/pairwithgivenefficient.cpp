#include<iostream>
#include<unordered_set>
using namespace std;

// writing is function
bool ispair(int arr[],int n,int sum)
{
    unordered_set<int> s;  // create an empty set 
    for(int i=0;i<n;i++)  // check if sum-i is present to form pair if not insert it and check again
    {
        if(s.find(sum-arr[i])!=s.end()){return true;}
        s.insert(arr[i]);
    }
    return false;
}

// writing the main code
int main()
{
    int arr[]={3,2,8,15,-8};
    int m = sizeof(arr)/sizeof(arr[0]);
    int sum;
    cin>>sum;
    int result = ispair(arr,m,sum);
    if(result==1){cout<<"yes";}
    else{cout<<"no";}
    return 0;

}
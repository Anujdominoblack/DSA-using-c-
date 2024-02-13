// the idea of efficient solution 
// first calculate the prefix solution then calculate for prefixsum-sum for each iteration 
// if the element is present i hash return max of res and position and length 
// we need to store the left most occurence
// we will use map here 
#include<iostream>
#include<unordered_map>
using namespace std;

int maxlen(int arr[],int n,int sum)
{
    unordered_map<int,int> m; // we will use prefix as key and index as value coz we need to find length and store first occurneces
    int presum=0,res=0;
    for(int i=0;i<n;i++)
    {
        presum +=arr[i];

        if(presum==sum){res=res+1;} // for the immediate and last occurences
        if(m.find(presum-sum)!=m.end())
        {
            res = max(res,i-m[presum-sum]); // as i is current index if found and presum-sum will give the first index of element found
        }

        if(m.find(presum) == m.end())
        {
            m.insert({presum,i}); // inserting the key value pair 
        }
       
    }
    return res;
}
// driver code
int main()
{
    int arr[] = {5,8,-4,-4,9,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum;
    cin>>sum;
    int result = maxlen(arr,n,sum); // succesful function call 
    cout<<result;
    return 0;

}
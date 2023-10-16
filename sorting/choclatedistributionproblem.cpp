// we are given packets of different sizes and we have m children now we want to distribute these choclate according to the rule
// 1) every child should get exactly 1 packets
// 2) we want to minimize the differences b/w the minimum choclate a child get and maximum another egt
#include<iostream>
#include<algorithm>
using namespace std;

int mindiff(int arr[],int n,int m)
{
    if(m>n){return -1;}
    sort(arr,arr+n);
    int res = arr[m-1]-arr[0]; // after sorting finding the differnces
     for(int i=1;i+m-1<n;i++)// as we travel upto m-1 elements greater than that if not less it will not create necessary condition
     {
        res = min(res,(arr[i+m-1]-arr[i]));
     }
     return res;

}

// driver code

int main()
{
    int arr[]={7,3,2,4,9,12,56};
    int n =sizeof(arr)/sizeof(arr[0]);
    int result = mindiff(arr,n,3);
    cout<<result;
    return 0;
}
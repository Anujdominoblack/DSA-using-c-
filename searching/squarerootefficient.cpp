#include<iostream>
using namespace std;

//in the efficient approach we will use the binary search  and calculate mid and find msq=mid*mid and if msq==x then return mid

// else if msq>x then discard the whole left array

// else msq<x then we will increase low from mid+1 and store the answer=mid 

int squareroot(int x)
{
    int low=1;  // low and  high 
    int high=x;  
    int ans=-1;  //creating ans 
    while(low<=high){  //loop for calculating
    int mid=(low+high)/2;
    int msq=mid*mid;  
    if(msq==x)
    {
        return mid;
    }
    else if(msq>x)  
    {
        high=mid-1;  //elelminating the whole array after mid
    }
    else{
        low=mid+1;
        ans=mid;  //storing temporary ans 
    }}
    return ans;
}

//driver code

int main()
{
    int x;
    cout<<"enter the number whose square root you want to find";
    cin>>x;
    int result=squareroot(x);
    cout<<result;
    return 0;
}
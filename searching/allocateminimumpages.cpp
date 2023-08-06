//here in this problem we will allocate maximum no of pages that can be read by astudent in  a contigous manner 
// it will be a naive solution in which we will use recursion and find solution
// in recusive we will assume every student reads at least one book 

#include<iostream>
using namespace std;
//definig the sum function
int sum(int arr[],int b,int k)
{
    int sum=0;
    for(int i=b;i<=k;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

//function for finding 
int minpages(int arr[],int n,int k)
{
    //now in this we will allocate at each step and check
    if(k==1){return sum(arr,0,n-1);}
    if(n==1){return arr[0];}

    //fixing the maximum value of int first to minimize it rapidly
    int res=INT16_MAX;
    for(int i=1;i<n;i++)
    {
        res=min(res,max(minpages(arr,i,k-1),sum(arr,i,n-1)));

    }
    return res;
}

//driver code

int main()
{
    int arr[]={10,20,30,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"enter the number of students";
    cin>>k;
    int result=minpages(arr,n,k);
    cout<<result;
    return 0;
}
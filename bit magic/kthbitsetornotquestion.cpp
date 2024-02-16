// the idea is to find if the kth bit is set or not 
// we can do it in two ways 
// i will discuss the first solution
// using left shit 
// the idea is if we left shift 1 to k-1 that will place 1 equal to position of check
// if their and is 1 they are set otherwise zero 
// this is the below implementation
#include<iostream>
using namespace std;

void setbits(int n,int k)
{
    if(n&(1<<(k-1)!=0)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}
// driver code
int main()
{
    int n,k;
    cout<<" enter the number and the set bit you want to check";
    cin>>n>>k;
    setbits(n,k);
    return 0;
}
//how to check kth bit is set or not
//now we will do left shift for that
// we will shift 1 by k-1 as by doing that we will make that element and 1 at same place and do and product
// if the result is non zero then its set bit

#include<iostream>
using namespace std;

//function for checking set bit

void set(int n,int k)
{
    if(n&(1<<(k-1))!=0){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}

//driver code

int main()
{
    int n,k;
    cout<<"enter the two numbers";
    cin>>n>>k;
    set(n,k);
    return 0;
    
}
//now we will do right shift check
// the idea is we will shift our  n by k-1 by doing this we fix the digit we want to check to last and do and product
// if the result is one the bit is set otherwise not

#include<iostream>
using namespace std;

void set(int n,int k)
{
    if(((n>>(k-1))&1)==1)
    {
        cout<<"yes the kth bit is set";
    }
    else{
        cout<<"no they are not set";
    }
}

//driver code

int main()
{
    int n,k;
    cin>>n>>k;
    set(n,k);
    return 0;
}
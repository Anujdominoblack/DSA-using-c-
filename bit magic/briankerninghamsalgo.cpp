// using brian kernings we can get no of set bits
// idea is if we do and operation of number with n-1 we will eventually get no of set  bits
#include<iostream>
using namespace std;

int countset(int n)
{   int res=0;
    while(n>0)
    {
        n = n&(n-1);
        res++;
    }
    return res;
}

// driver code
int main()
{
    int n;
    cin>>n;
    int result = countset(n);
    cout<<result;
    return 0;
}
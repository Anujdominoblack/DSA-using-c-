// the efficient method is keep right shifting the number and do and operation with 1
// if the result is 1 increment counter 
// below is the implementation
#include<iostream>
using namespace std;

int countbits(int n)
{
    int res=0;
    while(n>0)
    {
        if((n&1)!=0){res++;}
        n=n>>1;
    }
    return res;
}
// driver code
int main()
{
    int n;
    cout<<"enter the number you want to check ";
    cin>>n;
    int result = countbits(n);
    cout<<" the number of set bits  are "<<result;
    return 0;
}
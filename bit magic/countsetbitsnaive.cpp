// the naive idea is keep dividing the number by 2 if we get remainder increment counter 
// break loop and return count
#include<iostream>
using namespace std;

int countbits(int n)
{
    int res=0;
    while(n>0)  // it will check the condition
    {
        if(n%2!=0){
            res++;
        }
        n=n/2;
    }
    return res;
}

// driver code
int main()
{
    int n;
    cout<<"enter the number you want to check";
    cin>>n;
    int result = countbits(n);
    cout<<" the number of set bits are "<<result;
    return 0;
}
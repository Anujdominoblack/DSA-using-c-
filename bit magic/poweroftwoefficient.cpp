// the idea of finding efficient is we do and operation between the number and number-1 result will be 0 so its a power 
// of that number 
#include<iostream>
using namespace std;

bool ispow2(int n)
{
    if(n==0)
    {
        return false;
    }
    return ((n&(n-1))==0);  // it evaluates either true or false
}

// driver code
int main()
{
    int n;
    cin>>n;
    int result = ispow2(n);
    if(result==1){cout<<"yes it is ";}
    else{
        cout<<"no";
    }
    return 0;
}
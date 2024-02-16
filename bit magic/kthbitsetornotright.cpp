#include<iostream>
using namespace std;
// the idea is we right shift number by k-1 which places kth bit at 1 position and we just do and operation
// and we will find the right answer

void setbits(int n,int k)
{
    if(n<<(k-1)&1 ==1)
    {
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
    cin>>n>>k;
    setbits(n,k);
    return 0;
}
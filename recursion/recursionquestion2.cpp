// printing  number from 1 to n
#include<iostream>
using namespace std;

void recur(int n)
{
    if(n==0){return;}
    recur(n-1);
    cout<<n<<endl;
}

// driver code
int main()
{
    int n;
    cin>>n;
    recur(n);
    return 0;
}
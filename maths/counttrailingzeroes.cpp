#include<iostream>
using namespace std;

int counttrailingzeroes(int n)
{
    int res=0;
    for(int i=5;i<=n;i=i*5)
    {
        res=res+(n/i);
    }
    return res;
}

//driver code

int main()
{
    int n;
    cin>>n;
    int result=counttrailingzeroes(n);
    cout<<result;
    return 0;
}
#include<iostream>
using namespace std;

// writing the main function
int fun(int n){
    if(n==1){return 0;}
    else
    {
        return 1+fun(n/2);
    }
}

// driver code
int main()
{
    int n;
    cin>>n;
    int result = fun(2);
    cout<<result;
    return 0;
}
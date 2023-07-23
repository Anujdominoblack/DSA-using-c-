#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);  //recursion based solution
}

// driver code
int main()
{
    int n;
    cin>>n;
    int result=factorial(n);  //function call
    cout<<result;  //calculating the result
    return 0;

}
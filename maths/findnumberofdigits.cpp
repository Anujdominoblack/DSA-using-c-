#include<iostream>
using namespace std;

int countdigit(long n)
{
    int count=0;
    while(n!=0)  // loop 
    {
        n=n/10;  //dividing by 10 to get the number 
        ++count;
    }
    return count;
}

//driver code 
int main()
{
    long n;
    cin>>n;
    int result=countdigit(n);
    cout<<result;
    return 0;
}
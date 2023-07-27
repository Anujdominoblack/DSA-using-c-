#include<iostream>
using namespace std;

void printdivisor(int n)
{
for(int i=1;i<n;i++)
{
    if(n%i==0)
    {
        cout<<i<<" ";
    }
}
}

//driver code

int main()
{
    int n;
    cout<<"enter the number whose divisor you want to find";
    cin>>n;
    printdivisor(n);
    return 0;

}
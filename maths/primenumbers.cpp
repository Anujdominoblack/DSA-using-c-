// a number is called a prime number if it has only two factors

#include<iostream>
using namespace std;

bool isprime(int n)
{
    if(n==1)
    {
        return false;
    }
   for(int i=2;i<n;i++)
   {
    if(n%i==0)
    {
        return false;
    }
   }
   return true;
}

//driver code

int main()
{
    int n;  //variables are created
    cout<<"enter the number you want to find is prime or not";
    cin>>n;
    cout<<isprime(n); //function call
    return 0;

}
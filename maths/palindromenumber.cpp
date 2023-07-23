#include<iostream>
using namespace std;

int reverse(int n)  //reversing the original number
{
    int res=0;
    int temp=n;
    while(temp!=0)
    {
        int ld=temp%10; //dividing 
        res=res*10+ld;
        temp=temp/10;
    }
 return res;
}

//driver code

int main()
{
    int n;
    cin>>n;
    int result=reverse(n);  //function call
    if(n==result)  //checking the palindrome condition
    {
        cout<<"both the numbers are equal so they are palindrome to each other";
    }
    else{
        cout<<"not a palindrome number";
    }

    return 0;
}
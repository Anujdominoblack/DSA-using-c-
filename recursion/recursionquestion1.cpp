// in this simple code i will show how to write number from n to 1 using recursion
#include<iostream>
using namespace std;

/// writing the recursion function  it will print the numbers
void recur(int n)
{
    if(n<=0)
    {
        cout<<n<<" ";
        return;
    }
    cout<<n<<endl;
    recur(n-1);

}
int main()
{  
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    recur(n);  // function is evoked or called
    return 0;
}
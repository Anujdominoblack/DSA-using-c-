// rules of tower of hanoi is
// 1)only one disc above smaller
// 2)no larger disc above smaller
// 3)only the top disc of a tower can be removed
#include<iostream>
using namespace std;

// writing tower of hanoi 
void tower(int n,char A,char B,char C)
{
    if(n==1)
    {
        cout<<" move 1 from "<<A<<" to "<<C<<endl;
        return;
    }
    tower(n-1,A,C,B);
    cout<<" move "<<n<<" from "<<A<<"to"<<C<<endl;
    tower(n-1,B,A,C);
}

// driver code
int main()
{
    int n;
    cin>>n;
    char a,b,c;
    tower(n,a,b,c);
    return 0;
}
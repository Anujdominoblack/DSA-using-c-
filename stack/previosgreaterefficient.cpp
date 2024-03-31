// the efficient solution is based on stack and stock span problem 

#include<iostream>
#include<stack>
using namespace std;

void printgreater(int arr[],int n)
{
    stack<int> s;
    s.push(arr[0]);
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && s.top()<=arr[i])
        {
            s.pop();
        }
        int pg = s.empty()?-1:s.top();
        cout<<pg<<" ";
        s.push(arr[i]);
    }
}
//driver code
int main()
{
    int arr[]={15,10,18,4,6,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    printgreater(arr,n);
    return 0;
}

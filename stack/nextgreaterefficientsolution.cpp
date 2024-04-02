// the idea of efficient solution is do the previous greater approach and traverse backwards
#include<iostream>
#include<stack>
using namespace std;

void nextgreater(int arr[],int n)
{
    stack<int> s;
    s.push(arr[n-1]);//last element push
    for(int i=n-2;i>=0;i--)
    {
        while(s.empty()==false && s.top()<=arr[i])
        {
            s.pop();// pop until we reach previous greater
        }
        int nextg = s.empty()?(-1):(s.top());
        cout<<nextg<<" ";
        s.push(arr[i]); //at last we have to traverse backwards
    }

}
int main()
{
    int arr[]={5,15,10,8,6,12,9,18};
    int n = sizeof(arr)/sizeof(arr[0]);
    nextgreater(arr,n);
    return 0;
}
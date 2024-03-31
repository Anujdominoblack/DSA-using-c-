// the idea of efficient solution is we will push it into stack 
// we will push the index of element as it appears 
// when we encounter elements we  check if it is less than top of stack then print 1
// otherwise we will pop elements from top of stack 
// and when we find stack top gretae than element we will get span by subtacting index to top of stack
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

// we will implement efficient solution
void printspan(int arr[],int n)
{
    stack<int>s;  // we are creating a stack
    s.push(0); // we have to push it into the stack  pusing index 
    cout<<1; //because first is  always one
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && arr[s.top()]<=arr[i])
        {
            s.pop();
        }
        int span = s.empty()?i+1:i-s.top();  // using ternary condition here if is empty means largest element upto that  position 
        // encountered 
        cout<<span<<" ";
        s.push(i); //pushing element index 
    }
}

// driver code
int main()
{
    int arr[]={13,15,12,14,16,8,6,4,10,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    printspan(arr,n);
    return 0;
}

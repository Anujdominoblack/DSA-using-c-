// in this we will see the implementation of stack using array
#include<iostream>
using namespace std;

struct mystack{
    int *arr;//pointer for array
    int cap;//for capacity
    int top;//for inserting element AT TOP
    mystack(int c)
    {
        // constructor for stack size
        cap = c;
        arr = new int[cap];// dynamic array is allocated
        top=-1;// as initially stack is empty
    }
    void push(int x)
    {   if(top==cap-1){cout<<" stack overflow";}
        else{top++;
        arr[top]=x;//pushing element into the stack
    }}
    int pop()
    {   if(top==-1){cout<<"stack undeflow";return 0;}
        int res = arr[top];
        top--;
        return res;
    }
    int peek() 
    {   if(top==-1){cout<<"empty stack";return 0;}
        return arr[top];
    }
    int size()
    {
        return top+1; //for finding the size of stack
    }
    bool isempty(){
        return(top==-1);
    }
};// this is our stack implemented using array

// now driver code
int main()
{
    mystack s(1);
    s.push(10);
    s.push(20);
    cout<<s.pop();
    cout<<s.size();
    return 0;
}
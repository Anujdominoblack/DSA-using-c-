//in this question we will implement two stacks in an array
// in this idea is we will make two stack one from starting i.e 0 and one from ending that is from ending
// increment first stack and decrement second stack
// stack becomes full when there is no space left between two stack
#include<iostream>
using namespace std;
struct twostacks{
    int *arr,cap,top1,top2;// capaacity for creating array capacity
    // now we will have two tops one from top and one from last
    twostacks(int n){
        // n is size of stack
        cap=n;//making capacity as n
        top1=-1;//making as empty for first
        top2 = cap;//making top2 as capacity so inserting as will become top2--
        arr = new int[n];//making dynamic array

    }
    void push1(int x)
    {   if(top1<top2){
        top1++;
        arr[top1] = x;}
    }
    void push2(int x)
    {
        if(top1<top2-1)//minus 1 means empty space is there as we are moving backwards
        {
            top2--;
            arr[top2] = x;
        }
    }
    int pop1()
    {
        if(top1>0)
        {
            int x = arr[top1];
            top1--;
            return x;

        }
        else{
            return -1;
        }
    }
    int pop2()
    {
        if(top2<cap){  // if should be less than cap to get element
              int x = arr[top2];
              top2++;  //now we will have increase top2 as we have to increase the stack
              return x;
        }
        else{
            return -1;
        }
    }
    int size(){
        return top1+top2;
    }
};
//driver code
int main()
{
    twostacks s(5);
    s.push1(10);
    s.push2(30);
    s.push1(20);
    s.push2(40);
    cout<<s.size();
    cout<<s.pop1();
    s.pop2();
    cout<<s.size();
    return 0;

}
// the idea of efficient solution is to use the 
#include<iostream>
using namespace std;
struct deque{
    int *arr;
    int front,cap,size;
    deque(int c)
    {
        cap = c;
        size=0;
        front=0;
        arr = new int[cap];
    }
    void deltefront()
    {
        if(isempty()){return;}
        front = (front+1)%cap;  //increase the front 
        size--;

    }
    void insertfront(int x)
    {if(isfull()){return ;}

       front  = (front+cap-1)%cap; //decrease the front
       arr[front] = x;
       size++;
    }
    void deleterear()
    {
        if(isempty()){return;}
        size--;
    }
    int getrear()
    {
        if(isempty()){return -1;}
        else{
            return (front+size-1)%cap; 
        }
    }
    void insertrear(int x)
    {
        if(isfull()){ return ;}
        int new_rear = (front+size)%cap;
        arr[new_rear] = x;
        size++;
    }
    int getfront()
    {
        if(isempty()){return -1;}
        else{
            return front;
        }
    }
    bool isempty()
    {
        return(size==0);
    }
    bool isfull()
    {
        return(size==cap);
    }


};
//driver code
int main()
{
    deque q(10);
    q.insertfront(10);
    cout<<q.getfront()<<" ";
    return 0;
}
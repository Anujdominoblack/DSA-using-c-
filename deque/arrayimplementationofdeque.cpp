// in simple implementation we are always going to make front at zero and rear at size-1
#include<iostream>
using namespace std;
 struct  deque
 {
    int size,cap;
    int *arr;//pointers to array
    deque(int c)
    {
       cap =c;  //fixing capacity 
       size=0;  //initializing size as zero
       arr = new int[cap];//creating a new array
    }
    bool isfull()
    {
        return(size==cap);// it means size is equals the capacity
    }
    bool isempty()
    {
        return (size==0);// if size is zero means deque is empty
    }
    void insertatrear(int x)
    {
        if(isfull()){return;}
        arr[size] = x; // initilaizing and assigning at rear means just insert at rear size
        size++;
    }
    void deleterear()
    {
        // now when to delete from rear decrease the size just
        if(isempty()){return;}
        size--;//decrease the size 
    }
    int getrear()
    {
        if(isempty()){return -1;}
        else{
            return arr[size-1];// it gives the last element 
        }
    }
    void insertfront(int x)
    {
        // shift array element each one position ahead and insert at arr[0]
        if(isfull()){return;}
        for(int i = size-1;i>=0;i--)
        {
            arr[i+1] = arr[i];  //copying elements one posiiton ahead
        }
        arr[0] = x;  //insert at begining 
        size++;   // increase the size 
    }
    void deletefront()
    {
        if(isempty()){return ;}
        //shfiting elements one position back
        for(int i=0;i<size-1;i++)
        {
            arr[i] = arr[i+1];  //size -2 will contain size-1 so loop will run upto <size-1
        }
        size--;
        // decrease the size
    }
    int getfront()
    {
        if(isempty()){return -1;}
        else{
            return arr[0];
        }
    }
    int size1()
    {
        return size;
    }
 };
 //driver code
 int main()
 {
    deque x(5);
    x.insertatrear(10);
    x.insertfront(20);
    cout<<x.size1()<<" ";
    x.deleterear();
    cout<<x.getfront();
    return 0;

 }
 
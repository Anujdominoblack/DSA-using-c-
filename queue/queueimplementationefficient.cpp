// in this we will implement queue using array but the efficient approach will be to use the circular arra
// in this circular array is useful for o(1) implementation 
#include<iostream>
using namespace std;

struct queue
{
  int *arr;
  int front,cap,size;
  queue(int c){   // the constructor is created 
     cap = c;
     // capacity is assigned 
     arr = new int[cap];//dynamic array creation
     front =0;
     size=0;
     // initializeing both front and size
  }   
  bool isfull()
  {
    return(size==cap); //when size is equals to capacity it implies that queue is full
  }
  bool isempty()
  {
    return(size==0);// if size is 0 means our array is empty
  }
  int getfront()
  {
    // now we will getfront 
    if(isempty()){return -1;}
    //nothing to return as empty
    else{
        return front; // this is front
    }
  }
  int getrear()
  {
    if(isempty()){return -1;}
    else{
        return (front+size-1)%cap;//
        // in a circular array rear is always equal to front+size-1%cap
    }
  }
  // now we will check for enque
  void enque(int x)
  {
    if(isfull()){return ;}
    int rear = getrear();
    rear = (rear+1)%cap ;//increasing rear and as it is circular array
    arr[rear] = x;//adding elements at rear
    size++; //increasing the size

  }
  void deque(int x)
  {
    if(isempty()){return ;}//if it empty nothing to return
    // we will increase the front
    front = (front+1)%cap;
    size--;
  }
  int size1()
  {
     return size;
  }


};

//driver code
int main()
{
    queue q(5);
    q.enque(10);
    q.deque(20);
    q.enque(15);
    q.enque(34);
    cout<<q.size1();
    q.deque(50);
    cout<<q.size1();
    return 0;
    // succesfully implemented 
}
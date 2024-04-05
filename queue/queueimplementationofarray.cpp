// in this we will queue using array 
// and it will support the following functionalities 
/// enqueue dequeue size  getfront getrear isfull isempty
#include<iostream>
using namespace std;
 struct queue{
    int size,cap; //sizefor current size and cap for the capacity of the queue
    int *arr;//pointer to array
    queue(int c)  //the constructor is called
    {
       size=0;  //as queue is empty initially
       cap = c;  //assigning capacity
       arr = new int[cap];//creating an dynamic array of paricular capacity
    }
    bool isfull(){
        return(size==cap); //the queue is full when size is equal to capacitty
    }
    bool isempty(){
        return(size==0);// if queue is empty size is equal to 0
    }
    void enque(int x){
        if(isfull()){return ;}
        arr[size]==x;  // inserting at position 
        size++;  //incrementing the size
    }
    void deque()
    {
        if(isempty()){return;}//if it is empty we can't deque anything
        for(int i=0;i<size-1;i++){
            arr[i]=arr[i+1];//copying array elements one position back
            // size-1 because size is already empty element is upto size-1 and we will copy size-1 into size-2
        }
        size--;//decrement the size;
    }
    int getfront(){
        if(isempty()){return -1;}
        else{//if something is empty there is no front 
        return arr[0];}// getting first element 
    }
    int getrear(){
        if(isempty()){return -1;}
        else{
            return arr[size-1];
        }
    }
 };
 //driver code
 int main(){
    queue q(5);//giving size
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(40);
    int x = q.getfront();
    cout<<x<<" ";
    cout<<q.getrear()<<" ";
    q.deque();
    q.deque();
    cout<<q.getfront()<<" ";
    return 0; 
   
 }
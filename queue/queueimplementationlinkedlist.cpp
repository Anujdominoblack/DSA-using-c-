// in implementing queue using linked list we need to decide
// what is front and rear 
// we will choose head as front and rear as last 
// insert via last and deque using first
// when deque just move first to first's next
#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x){// constructor is called
    data = x;
    next = NULL;
}
};
struct queue{
    node *front,*rear;  //two node pointers are created
    queue(){  //constructor is called 
     front=rear=NULL;
    }
    void enque(int x){
        node *temp = new node(x);//new node is created 
        if(front==NULL){  //for first node
             front = rear = temp;
             return;//because at first all will be same
        }
        rear->next = temp;  //adding node and llinking 
        rear = temp;  //moving rear
        }
    void deque(){
        if(front==NULL){return;}// if is is null nothing to return
        node *temp = front;
        front  = front->next;
        if(front==NULL){  //if we have reached front as null means last element has been deleted so make rear as null
            rear=NULL;
        }
        delete(temp);
    }

};
//driver code
int main(){
    queue q;
    q.enque(10);
    q.enque(20);
    q.deque();
    return 0;
    
}
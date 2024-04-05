// now we can implement queue usign stl inn this way
#include<iostream>
#include<queue>
using namespace std;
// driver code
int main(){
  queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40); 
  //push is equal to enque 
  cout<<q.front()<<" "<<q.back()<<endl;
  q.pop();//equal to deque
  cout<<q.front()<<endl;
  return 0;

}
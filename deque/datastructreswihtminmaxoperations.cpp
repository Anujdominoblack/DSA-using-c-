// desing a data structre that supports following operatoions in o(1) time complexity
// insert min ,insert max,getmin,metmax,extractmin,extractmax
#include<iostream>
#include<deque>
using namespace std;

struct myds{
    deque<int> q;
    void insertmin(int x)
    {
        q.push_front(x);
    }
    void insertmax(int x)
    {
        q.push_back(x);
    }
    int getmin()
    {
        return q.front();
    }
    int getmax()
    {
        return q.back();
    }
    void extractmin()
    {
       q.pop_front();
    }
    void extractmax()
    {
        q.pop_back();
    }
};
//driver code
int main()
{
    myds s;
    s.insertmin(10);
    cout<<s.getmin();
    return 0;


}
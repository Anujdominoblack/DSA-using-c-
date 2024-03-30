#include<iostream>
#include<vector>
using namespace std;

struct mystack{
    vector<int> v;
    void push(int x)
    {
        v.push_back(x);
    }
    int pop()
    {
        int res = v.back();  //storing last element 
        v.pop_back();//poping the last element 
        return res; // returning res;
    }
    int size()
    {
        return v.size(); //returning the sizzeof vector to find sizeofarrays
    }
    bool isempty()
    {
        return v.empty();
    }
    int peek()
    {
        return v.back();
    }


};
//driver code
int main()
{
    mystack s;
    s.push(10);
    s.push(20);
    s.push(100);
    cout<<s.pop();
    cout<<s.size();
    return 0;
}
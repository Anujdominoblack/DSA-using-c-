#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(40);
    s.insert(50);

    if(s.find(20)==s.end())  // s.find returns iterator
    {
        cout<<"not found"<<endl;
    }
    else{
        cout<<"found at" <<*(s.find(20));  // as s.find returns iterator we defrence it 
    }
    return 0;
}
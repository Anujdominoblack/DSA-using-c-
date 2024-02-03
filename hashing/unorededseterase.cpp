#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    cout<<s.size()<<" ";
    s.erase(20);
    cout<<s.size()<<" ";
    auto it = s.find(30);
    s.erase(it);
    cout<<s.size()<<" ";
    return 0;

}
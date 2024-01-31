#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set <int> s;
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    for(auto it = s.begin(); it !=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    s.clear();
    cout<<s.size()<<endl;
    return 0;

}
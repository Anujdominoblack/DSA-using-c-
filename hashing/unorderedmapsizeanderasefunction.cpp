#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int> m;
    m["first"] = 20;
    m["seond"] = 30;
    m["third"] = 40;
    cout<<m.size()<<" ";
    m.erase("first");
    m.erase(m.begin());  // we can pass iterator also to erase function
    cout<<m.size()<<" ";
    return 0;
}
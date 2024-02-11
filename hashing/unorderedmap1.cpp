#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int> m;
    m["first"] = 20;
    m["second"] = 30;
    m["third"] = 40;

    if(m.find("first")!=m.end())  //we use key for searching 
    {
        cout<<"found"<<endl;
    }

    for(auto it = m.begin();it!=m.end();it++)  // as m.begin return iterator so we have to dereference it 
    {
       cout<<it->first<<" "<<it->second<<" "<<endl;  // and there are two elements 
       return 0;
    }
}
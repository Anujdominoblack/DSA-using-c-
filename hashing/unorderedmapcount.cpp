#include<iostream>
#include<unordered_map>
using namespace std;
// count is used to find if element exist or not return 1 or 0
int main()
{
    unordered_map<string ,int > m;
    m["first"] = 20;
    m["second"] = 30;
    m["third"] = 40;
    if(m.count("four")>0){cout<<"element is present in hashmap"<<endl;}
    else{cout<<"element is not present"<<endl;}  // here key is used as parameter
    cout<<m.size()<<endl;
    return 0;

}
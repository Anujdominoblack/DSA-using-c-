// it is used to store key value pairs 
// it uses hashing 
// there is no order of keys
#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string , int> m;// key is string type and value is int
    // when we put key inside [] brackets it returns reference of  value if value is not present it inserts it
    m["first"] = 20;
    m["second"] = 30;
    // now insert function is used to insert
    m.insert({"third",40}); // key value pair 
    // now we will use pointer to iterate 
    for(auto it : m)
    {
        cout<<it.first<<" "<<it.second<<" "<<endl;  // first prints key and second prints value 
    } 
    return 0;
}
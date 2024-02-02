#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    if(s.count(15))
    {
        cout<<"found"<<" ";
    }
    else{
        cout<<"not found"<<" ";
    }
    cout<<s.count(20)<<" ";
    return 0;
}
// count can be used as a substitution of find function
// returns either 1 or 0 (it returns 1 if element is present and 0 )
// if not present because there can't be duplicate items in 
// unordered set 
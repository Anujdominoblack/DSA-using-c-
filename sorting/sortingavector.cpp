#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//driver code
int main()
{
    vector<int> v={5,7,20,10};
    sort(v.begin(),v.end());  // passing firt index and index beyond last element 
    for(int x : v)
    {
        cout<<x<<" ";  // output 
    }

    cout<<endl;
    return 0;
}


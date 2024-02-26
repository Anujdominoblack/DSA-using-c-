// now we will write another solution
#include<iostream>
#include<algorithm>
using namespace std;

bool isvalid(string &s1,string &s2)
{
    if(s1.length()!=s2.length())
    {
        return false;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    return (s1==s2);
}

// writing the driver code
int main()
{
    string s1,s2;
    cout<<" enter the two string";
    cin>>s1>>s2;
    int result = isvalid(s1,s2);
    if(result ==1)
    {
        cout<<"it is valid anagram"<<" ";
    }
    else{
        cout<<" it is not valid anagram"<<" ";
    }
    return 0;
}
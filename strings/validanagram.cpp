// in this we will find the valid anagram 
#include<iostream>
#include<algorithm>
using namespace std;

// writing the main function
bool isvalid(string &s1,string &s2)
{
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    // now as we have sorted we will now check
    if(s1.length()!=s2.length()){
        return false;
    }
    else{
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]!=s2[i])
            {
                return false;
            }
        }
    }
    return true;

}

// writing driver code
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
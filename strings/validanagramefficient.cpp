// the idea of efficient solution we will create a character array
//and we will use intialize it as zero
// for every charcter in first string we will increase count 
// and for second array decrease it
#include<iostream>
using namespace std;
const int number =256;

bool isvalid(string &s1,string &s2)
{
    if(s1.length()!=s2.length())
    {
        return false;
    }
    int count[number] = {0}; // array is created 
    // we will use character as index of array
    for(int i=0;i<s1.length();i++)
    {
        count[s1[i]]++;
          // increasing count at index 
        count[s2[i]]--; // decreasing the count
    }
    for(int i=0;i<s1.length();i++)
    {
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}
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
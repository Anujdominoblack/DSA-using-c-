// the idea for better solution is use the idea of character as index
// we check and increment index for every repetation and store their frequencies
// then return leftmost whose value greater than 1
#include<iostream>
using namespace std;

const int max1=256;

int leftmost(string &str)  // the implementation
{
    int count[max1] = {0}; // array is created
    for(int i=0;i<str.length();i++)
    {
        count[str[i]]++;
    }
    for(int i=0;i<str.length();i++)
    {
        if(count[str[i]]>1){
            return i;
        }
    }
    return -1;
}
// driver code
int main()
{
     string str;
    cout<<" enter the string ";
    cin>>str;
    int result = leftmost(str);
    cout<<result;
    return 0;
}

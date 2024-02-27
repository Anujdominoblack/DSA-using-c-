// idea of better solution is same as previous
#include<iostream>
using namespace std;

const int max1 =256;

int nonrep(string &str)
{
    int count[max1] = {0};
    for(int i=0;i<str.length();i++)
    {
        count[str[i]]++; // using string character as index 
    }
    for(int i=0;i<str.length();i++)
    {
        if(count[str[i]]==1)
        {
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
    int result = nonrep(str);
    cout<<result;
    return 0;
}

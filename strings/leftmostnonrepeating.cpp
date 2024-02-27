// find the index of leftmost non repeating element
#include<iostream>
using namespace std;

int nonrep(string &str)
{
    for(int i=0;i<str.length();i++)
    {
        bool flag = false;
        for(int j=0;j<str.length();j++)
        {
            if(i!=j && str[i]==str[j])
            {
                flag = true;
                break;
            }
        }
        if(flag == false)
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

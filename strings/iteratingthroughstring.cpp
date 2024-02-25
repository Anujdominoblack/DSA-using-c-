// in this example we will see how to iter through strings
#include<iostream>
using namespace std;

int main()
{
    string str = "thisisgithub";
    for(int i=0;i<str.length();i++)
    {
        cout<<str[i]<<" ";
    }
    

     /*for(char x : str)
    {
        cout<<x;
    }*/
    return 0;
}
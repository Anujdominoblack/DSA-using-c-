// in this we will apply optimised solution
#include<iostream>
using namespace std;
// writitng the function
bool ispalindrome(string &str)
{
   int start =0;
   int end = str.length()-1;
   while(start<=end)
   {
       if(str[start] != str[end]){return false;}
       start++;
       end--;
   }
   return true;

}

// driver code
int main()
{
    string str;
    cout<<"enter the string you want to check";
    cin>>str;
    int result = ispalindrome(str);
    if(result==1){
        cout<<" is palindrome";
    }
    else{
        cout<<" is not palindrome";
    }
    return 0;
}
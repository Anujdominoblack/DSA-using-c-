// in this question we will chwck if two strings are palindrome of each other
// first we will implement naive method
#include<iostream>
#include<algorithm>
using namespace std;

// function for checking palindrome
bool ispalindrome(string &str)
{
    string rev = str;
    reverse(rev.begin(),rev.end()); // reverse is used to reverse which takes two iterator as input one begin on end

    // now we will just check
    return(rev==str);  // returns true if they are palindrome else fase 
}

// writing the driver code
int main()
{
    string str;
    cin>>str;
    int result = ispalindrome(str);
    if(result==1){
        cout<<"the given string is palindrome";
    }
    else{
        cout<<" the given string is not palindrome";
    }
    return 0;
}
//given a string of parenthesis we need to check if this string is balanced or not
// the idea is implemented using stack when we see a opening we will push into stack
// and if we see a closing bracket we will check it with a stack top if it matches pop otherwsie return false
// if stack becomes empty return true
#include<iostream>
#include<stack>
using namespace std;

bool ismatching(char a,char b)
{
    return((a==')' && b=='(')||(a==']' && b=='[')||(a=='}' && b=='{'));
}

bool isbalanced(string str)
{
    stack<char> s;  //stack is ccreated of type char
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='('||str[i]=='{'||str[i]=='['){
            s.push(str[i]);
        }
        else{
            if(s.empty()==true){
                return  false;// we will return empty stack false 
            }
            else if(ismatching(str[i],s.top())==false){
                return false;// it is not matching so not valid paranthesis
            }
            else{
                s.pop();// it means its matching we will pop
            }
        }
    }
    return (s.empty()==true);//finally stack becomes empty so return true
}

//driver code
int main()
{
    string str;
    cin>>str;
    int result = isbalanced(str);
    if(result==0){
        cout<<"not balanced";
    }
    else{
        cout<<"is balanced";
    }
    return true;

}
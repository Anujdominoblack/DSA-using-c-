// here we have to generate all the subsets of the string
// there will be 2^n subsets of the string
// here we have basic idea that we will create an empty string one time
// we will increment it by adding one character and onw withoud adding
// base case is when the curr is equal to string length is prints
#include<iostream>
using namespace std;

void subsets(string str,string curr,int i=0)  // i for length of substring
{
  if(i==str.length())
  {
    cout<<curr<<endl;  // because of two cases every substring will reach at that case
    return;
  }
  subsets(str,curr,i+1);// first case not including but incrementing
  subsets(str,curr+str[i],i+1);//str[i] adds the current string element 
}
//
int main()
{
    string str;
    cout<<"enter the string you want subsets";
    cin>>str;
    // create a empty string
    string curr="";
    subsets(str,curr,0);
    return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;
void reverse(char str[],int low,int high)
{
    while(low<=high)
    {
        swap(str[low],str[high]);
        low++;
        high--;
    }
}
void reversewords(char str[],int n) //1)reverse individual words 2)reverse whole string
{int start=0;
for(int end=0;end<n;end++ )
{
    if(str[end]==' ')
    {
        reverse(str,start,end-1);
        start = end+1; // reversed
    }
}
reverse(str,start,n-1); //reversing last word
reverse(str,0,n-1); // rerse whole string 
}

// driver code
int main()
{
     string str; // converting string to character araay
    cout<<" enter the string ";
    cin>>str;
    int result = reversewords(str);
    cout<<result;
    return 0;
}



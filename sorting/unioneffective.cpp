#include<iostream>
#include<algorithm>
using namespace std;
// function for union
void printunion(int a[],int b[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(i>0 && a[i]==a[i-1]){i++;continue;}
        if(j>0 && b[j]==b[j-1]){j++;continue;}
        if(a[i]<b[j]){cout<<a[i];i++;}
        else if(a[i]>b[j]){cout<<b[j];j++;}
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }

    }

    // printing the remaining elements
    while(i<m)
    {
        if(i>0 && a[i]!=a[i-1])
        {
            cout<<a[i]<<" ";
            i++;
        }
    }
    while(j<n)
    {
        if(j>0 && b[j]!=b[j-1])
        {
            cout<<b[j]<<" ";
            j++;
        }
    }
}

//driver code
int main()
{
    int a[]={5,10,15,20,30};
    int b[]={6,10,20,25};
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    printunion(a,b,m,n);
    return 0;
}
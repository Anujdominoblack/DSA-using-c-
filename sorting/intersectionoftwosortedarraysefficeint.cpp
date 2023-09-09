#include<iostream>
#include<algorithm>
using namespace std;
//function for finding the intersection of two sorted arrays
void intersection(int a[],int b[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(i>0 && a[i]==a[i-1]){
             i++;
             continue;}
        if(a[i]<b[j]){i++;}
        if(a[i]>b[j]){j++;}
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
}

//driver code
int main()
{
    int a[]={5,10,10,15,20,20};
    int b[]={10,10,20,20};
    int m = sizeof(a)/sizeof(a[0]);
    int n = sizeof(b)/sizeof(b[0]);
    intersection(a,b,m,n);
    return 0;
}

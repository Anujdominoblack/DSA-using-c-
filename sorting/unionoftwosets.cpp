#include<iostream>
#include<algorithm>
using namespace std;
// naive method to solve
// it is same as merge two sorted arrays
void unionof(int a[],int b[],int m,int n)
{
  int c[m+n];
  for(int i=0;i<m;i++)
  {
    c[i]=a[i];
  }
  for(int j=0;j<n;j++)
  {
    c[m+j]=b[j];
  }
  sort(c,c+m+n);
   // now we will remove duplicates
   for(int i=0;i<m+n;i++)
   {
    if(i==0 || c[i]!=c[i-1])
    {
        cout<<c[i]<<" ";
    }
   }

}

// driver code
int main()
{
    int a[]={5,10,20,30,40};
    int b[]={2,3,6,9,11,15,20,30};
    int m = sizeof(a)/sizeof(a[0]);
    int n = sizeof(b)/sizeof(b[0]);
    unionof(a,b,m,n);
    return 0;
}
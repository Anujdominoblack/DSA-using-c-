// we are given a matrix we are also given a value and we need to find the element and print it index
#include<iostream>
using namespace std;

void search(int **arr,int m,int n,int x)
{
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
         if(arr[i][j]==x)
         {
            cout<<"found at ("<<i<<","<<j<<")";
         }
      }
    }
}

//driver code
int main()
{
    int m,n;
    cin>>m>>n;
    int **arr;

    arr = new int *[m]; // m corresponds to rows

    for(int i=0;i<m;i++)
    {
        arr[i] = new int [n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int x;
    cin>>x;

    search(arr,m,n,x);  // function call
    return 0;
}
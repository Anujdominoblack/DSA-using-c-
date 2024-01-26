// in this problem we are given a matrix and we have to print the boundary traversal
// idea is we have rxc combination where r is the no of rows and columns first we need to
// print the first row  then last col then the last row  from right to left then the 
// first coloumn backwards 
#include<iostream>
using namespace std;

void print(int *arr[],int m,int n)
{
    if(m==1){
        for(int i=0;i<n;i++)
        {
            cout<<arr[0][i]<<" ";
        }
    }
    else if(n==1)
    {
       for(int i=0;i<m;i++)
       {
        cout<<arr[i][0]<<" ";
       }
    }
    else{
        for(int i=0;i<n;i++)
        {
            cout<<arr[0][i]<<" ";
        }
        for(int i=1;i<m;i++)
        {
            cout<<arr[i][n-1]<<" ";
        }
        for(int i=n-2;i>=0;i--)
        {
            cout<<arr[m-1][i]<<" ";
        }

        for(int i=n-2;i>=1;i--)
        {
            cout<<arr[i][0]<<" ";
        }
    }
}

// driver code

int main()
{
    int m,n;
    cin>>m>>n;
    int *arr[m]; // m corresponds to row
    for(int i=0;i<m;i++)
    {
        arr[i] = new int [n];  // n is number of columns 
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    print(arr,m,n);
    return 0;
}

// the solution is successfully implemented 
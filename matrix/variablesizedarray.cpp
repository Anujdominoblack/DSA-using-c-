#include<iostream>
using namespace std;

// now we will create our main programme

int main()
{
    int m=3,n=2;
    int arr[m][n];
    for(int i=0;i<m;i++)  // m corresponds to rows filling row by row 
    {
        for(int j=0;j<n;j++)  // j for column 
        {
            cin>>arr[i][j];  // entering the values
        }
    }

    // now we will print our values

    for(int i=0;i<m;i++)  // i for row 
    {
        for(int j=0;j<n;j++)  // j for columns 
        {
             cout<<arr[i][j]<<" ";  // printing the values
        }
    }

    return 0;

}
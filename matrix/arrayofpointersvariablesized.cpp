#include<iostream>
using namespace std;

int main()
{
    int m=3,n=2;
    int *arr[m];
    for(int i=0;i<m;i++)
    {
        arr[i] = new int [n];  // dynamic memory allocation creating array for each associated pointer 
        for(int j=0;j<n;j++)
        {
            arr[i][j] = i+j;  // entering the values
        }
    }

    // now printing the values
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }

    // now we have printed all the values 
    // it is similar to double pointer 
}
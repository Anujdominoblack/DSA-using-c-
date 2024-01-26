// now we will use array of pointers

#include<iostream>
using namespace std;

void print(int *arr[],int m,int n)
{
    for(int i=0;i<m;i++)  // m corresponds to rows 
    {
        for(int j=0;j<n;j++)  // n corresponds to columns 
        {
            cout<<arr[i][j]<<" ";
        }
    }
}

// now we will define the main function

int main()
{
    int m=3,n=2;
    int *arr[m];  // array of pointers where m corressponds to no of rows 

    for (int  i = 0; i < m; i++)
    {
        // now we will do the dynamic memeory allocation
        arr[i] = new int [n];  // creating array for each row 
        for(int j=0;j<n;j++)
        {
            arr[i][j] = i+j+10;  // filling rows 
        }
    }

    // now we will do function call
    print(arr,m,n); // passing as reference to avoid copying of array 
    return 0;
    
}
// the first question is solving the matrix in snake pattern 
// one thing is clear in this if row is even traverse left to right is row is odd traverse right to left
#include<iostream>
#include<vector>
using namespace std;

void print(int *arr[],int m,int n)  // this is the required function to print in snake pattern
{
    for(int i=0;i<m;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
    }
}

// driver code
int main()
{
    int m=4,n=4;
    int *arr[m]; // m corresponds to no of rows
    for(int i=0;i<m;i++)
    {
        arr[i] = new int [n]; // dynamic memory allocation 

        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];  // array values succesfully filled
        }
    }

    print(arr,m,n);
    return 0;
}  
// succesfully impmentented 
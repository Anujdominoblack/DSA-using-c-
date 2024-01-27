// in this problem we are given a matrix and we wish to rotate this matrix by 90
// the idea of naive solution is last column becomes first row 
// second last column becomes second row
#include<iostream>
using namespace std;
void rotate90(int *arr[],int m,int n)
{
    int temp[n][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            temp[n-j-1][i]=arr[i][j]; // we made the last col first row
        }
    }

    for(int i=0;i<m;i++)  // now we are printing the result
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j] = temp[i][j];
        }
    }

     for(int i=0;i<m;i++)  // now we are printing the result
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }

}

// driver code

int main()
{
    int m,n;
    cin>>m>>n;
    int *arr[m]; //array of pointers

    for(int i=0;i<m;i++)
    {
        arr[i] = new int [n]; // dynamic memory allocation
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    rotate90(arr,m,n);
    return 0;
}
// in this problem we have to find the transpose of a matrix
// first we have naive solution we can implement in following way
// in naive solution we are basically moving elements from index [i][j]
// to the index [j][i]  we can do this by using swap method
#include<iostream>
#include<algorithm>
using namespace std;

void print(int *arr[],int m,int n)
{  int temp[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<n;j++)  
        {
           temp[i][j]=arr[j][i]; // we are using swap function to swap elements 
        }
    }

    // now we will print the elements
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<temp[i][j]<<" ";
        }
    }
}

// driver code
int main()
{
    int m,n;
    cin>>m>>n;
    int *arr[m];  // array of pointers created 
    // here m corresponds to no of rows 
    for(int i=0;i<m;i++)
    {
        // now we will add column and create dynamic allocation
        arr[i] = new int [n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    print(arr,m,n);
    return 0;

}
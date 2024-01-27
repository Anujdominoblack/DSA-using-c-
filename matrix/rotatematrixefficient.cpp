#include<iostream>
#include<algorithm>
using namespace std;

// the idea of efficient solution is 
// 1)find transpose of matrix 
// 2)reverse individual columns 

void rotate(int *arr[],int m,int n)
{
    // first find the transpose of a matrix
    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<n;j++)
        { swap(arr[i][j],arr[j][i]);
        }
    }
    
    // now we will reverse individual col

    for(int i=0;i<m;i++)
    {
        int low=0,high=n-1;
        while(low<high)  // here using concept of binary search
        {
            swap(arr[low][i],arr[high][i]);
            low++;
            high--;
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
}

//driver code
int main()
{
    int m,n;
    cin>>m>>n;
    int *arr[m];  // m represents rows 
    for(int i=0;i<m;i++)
    {
        arr[i] = new int [n]; // for column
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    rotate(arr,m,n);
    return 0;
}
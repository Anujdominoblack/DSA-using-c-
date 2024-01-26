#include<iostream>
using namespace std;

void print(int **arr,int m,int n)
{
    for(int i=0;i<m;i++)
    {
        // here m corresponds to rows 
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
    int **arr;  // double pointer is created 

    arr = new int *[m];  // double pointer refering to array of pointers 

    // now we will fill the elments
     
    for(int i=0;i<m;i++)
    {
        arr[i] = new int [n]; // dynamic memory allocation
        for(int j=0;j<n;j++)  // n corresponds to columns and m corresponds to rows 
        {
            cin>>arr[i][j];
        }
    }

    // now the array is created invoke the function call
    print(arr,m,n);
    return 0;

}

// succesfully implemented 
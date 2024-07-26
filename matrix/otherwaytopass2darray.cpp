// now we will use double pointer for that purpose
//here individual pointer responds to individual rows and each pointer is pointing to array

// we use a pointer to a pointer to specify our 2d array and then we pass no of rows and columns 
#include<iostream>
using namespace std;
void print(int **arr,int m,int n)
{
    // passing the double pointer 
    for(int i=0;i<m;i++)  //m corresponds to rows 
    {
       for(int j=0;j<n;j++)
       {
        cout<<arr[i][j]<<" ";
       }  // n corresponds to columns 
    }
}

// writing the main function
int main()
{
    int **arr;
    int m=3,n=2;
    arr = new int *[m]; // dynamic memory allocation
    for(int i=0;i<m;i++)
    {
        arr[i] = new int [n];
        for(int j=0;j<n;j++)
        {
            arr[i][j] = 1+i+j;  // travers trhough each row create array and give values 
        }
    }

    print(arr,m,n);
    return 0;
}

// succesfully implented using double pointers 
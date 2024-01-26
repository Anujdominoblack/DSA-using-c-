#include<iostream>
#include<vector>
using namespace std;

void print(int arr[3][2])  // this statement takes array as argument 
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
}

// writing the main functions 

int main()
{
    int arr[3][2] = {{10,20},{30,40},{50,60}};
    // now we will call the print function to the print the values in the matrix

    print(arr);

    return 0;
}

// note : the problem with this implementation is it really works with 3X2 matrix and now we will try to solve this problem 
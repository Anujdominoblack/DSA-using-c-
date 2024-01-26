// one soltuion to resolve the previous problem is the passing rows as arguments
#include<iostream>
using namespace std;

void print(int arr[][2],int m)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" "; // here m corresponds to number of rows 
        }
    }

    // in cpp we can omit the first dimension of multidimensional array 
}
// main function
int main()
{
    int arr[3][2] = {{10,20},{30,40},{50,60}};
    print(arr,3);
    return 0;
}

// now we will further refine that 
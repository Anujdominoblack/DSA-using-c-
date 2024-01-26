#include<iostream>
#include<vector>
using namespace std;

// we can create a 2d array using 
int main()
{
    int arr[3][2] = {{10,20}, // array contains three elements and each element contains two eleemnt 
                      {30,40},
                      {50,60}};  // 2d array of 3 rows and two columns

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";   // i is for row and j is for column   op : 10 20 30 40 50 60 
        }
    }

    return 0;
}

// note : the elements are stored in row major order 
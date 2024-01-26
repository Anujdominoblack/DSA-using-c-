// now we will further optimised 
//  now we have to assume here is global constant variablw which tell dimesnion if matrix

#include<iostream>
#include<algorithm>
using namespace std;

const int r=3; // the global varibles declaration
const int c=2;

void print(int arr[r][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
}

// now we will write the main function
int main()
{
    int arr[r][c] = {10,20,30,40,50,60};
    print(arr);
    return 0;
}
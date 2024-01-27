#include<iostream>
using namespace std;
// here we have to do spiral traversal the idea is we will create four variables
// top bottom left and right and increment them properly
void printspiral(int *arr[],int m,int n)
{
    int top=0,bottom=m-1,left=0,right=n-1;
    while (top<bottom && left<right)
    {
        for(int i=left;i<=right;i++)
        {
           cout<<arr[top][i]<<" ";   // it prints the top row 
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            cout<<arr[i][right]<<" ";  // it prints the right coloumn
        }
        right--;

        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)  //  it prints bottom row
            {
                cout<<arr[bottom][i]<<" ";
            }
            bottom--;
        }
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)  // it prints first col
            {
                cout<<arr[i][left]<<" ";
            }
            left++;
        }

    }
    

}

// writing the driver code
int main()
{int m,n;
cin>>m>>n;
int *arr[m];
for(int i=0;i<m;i++)
{
    arr[i] = new int [n];
    for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];
    }
}

printspiral(arr,m,n);
return 0;

}
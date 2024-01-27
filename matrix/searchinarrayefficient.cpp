// now we will write efficient solution the idea of efficient solution is 
// 1)begin from the top right corner 
// 2)if x i same print position and return 
// 3) if x is smaller move left
// 4) if x is greater move down
#include<iostream>
using namespace std;

void search(int **arr,int m,int n,int x)
{
    int i=0,j=n-1;  // j for row and i for column 
    while(i<m && j>=0)
    {
        if(arr[i][j]==x)
        {
            cout<<"found at ("<<i<<" "<<j<<")";
            return;
        }
        else if (arr[i][j]>x)
        {
            j--;  // for going left
        }
        else{
            i++; // for going down
        }

    }
}

// driver code
int main()
{
    int m,n;
    cin>>m>>n;
    int **arr;

    arr = new int *[m]; // m corresponds to rows

    for(int i=0;i<m;i++)
    {
        arr[i] = new int [n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int x;
    cin>>x;

    search(arr,m,n,x);  // function call
    return 0;
}
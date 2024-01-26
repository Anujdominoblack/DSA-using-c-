#include<iostream>
#include<vector>
using namespace std;

// now we will use vector to find the result
void print(vector<int> arr[],int m)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<arr[i].size();j++) // becuase m corresponds to row and row is veector so less than i size 
        {
            cout<<arr[i][j]<<" ";  // displaying the values 
        }
    }
}


// now we will write the main function 

int main()
{
    int m=3,n=2;
    vector<int> arr[m];  //  array of vectors succesfully created

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i].push_back(i+j);  // psuhing elements into the array
        }
    }

    print(arr,m);  // function call 
    return 0;

}
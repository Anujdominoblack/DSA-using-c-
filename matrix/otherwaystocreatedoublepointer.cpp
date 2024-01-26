// here now we will use double pointer to create variable sized array
#include<iostream>
using namespace std;

int main()
{  int m=3,n=2;
    int **arr;  // first we will create a  double pointer which will point towards the array of pointers

    arr = new int *[m];  // array of pointers where m corresponds to rows and how many pointer will array have 
    
    // now we each pointer will poin to individual array 

    for(int i=0;i<m;i++)  // our array is filled now 
    {
        arr[i] = new int [n]; // we dynamically allocates and give size of each column

        for(int j=0;j<n;j++) {
            // filling the columns 
            arr[i][j]=10;  // filling the values 
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
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int m=3,n=2;
    // now we will create array of vectors 

    vector<int> arr[m]; // we have created an array of vectors where m corresponds to rows 
     // individual vector contains contents of individual rows 
    // noe we will trvaerse through each array elements that is vector 
    // and we will push elements to vectors

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)  // correspods to two columns 
        {
            arr[i].push_back(i+2); // we are pushing values to vectors utlimately values to rows 
        }
    }

    // now we will print all the values
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
return 0;

}
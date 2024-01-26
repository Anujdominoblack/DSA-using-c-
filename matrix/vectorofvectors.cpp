#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int m=3,n=2;
    vector<vector<int>> v;
    
    // we have created vector  of vectors 
    for(int i=0;i<m;i++)  // here m corresponds to rows and each rows contains individual vector containing elements
    {
           // now we will create individual vector

           vector<int> c;
           for(int j=0;j<n;j++) // filling elements to the column 
           {
            c.push_back(j+1);  // now as we have pushed elements in vector now we will push entire vector to main vector
           }
           v.push_back(c);  // pushing it 
    }

    // now we will print it back
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
    }

    return 0;

}
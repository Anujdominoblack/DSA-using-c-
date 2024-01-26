// now we will use vector of vectors to pass the array 
#include<iostream>
#include<vector>
using namespace std;

void print(vector<vector<int>> &v)  // to avoid copying of data passing it as reference 
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" "; // we dont need to pass paramter it can fgiure out itself
        }
    }
}

int main()
{   int m=3,n=2;
    vector<vector<int>> v;
    for(int i=0;i<m;i++)
    {
        vector<int> c;
        for(int j=0;j<n;j++)
        {
            c.push_back(10+i);  // pushing elemets into column 
        }

        // now we will push the entire vector to form rows 
        v.push_back(c);
    }

    // now we will do the function call
    print(v);
    return 0;
}
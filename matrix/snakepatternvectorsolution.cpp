// the idea is same as following but this time we will use vector of vectors
#include<iostream>
#include<vector>

using namespace std;

void print(vector<vector<int>> &v)  // using vector of vectors we are printing the result  passing as refernce to save memory
{
    for(int i=0;i<v.size();i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<v[i].size();j++)
            {
                cout<<v[i][j]<<" ";
            }
        }
        else{
            for(int j=v[i].size()-1;j>=0;j--)
            {
                cout<<v[i][j]<<" ";
            }
        }
    }
}

// driver code
int main()
{
    int m=3,n=2;
    vector<vector<int>> v;
    for(int i=0;i<m;i++)   // m corresponds to rows and each row is vector
    {
        vector<int> c;
        for(int j=0;j<n;j++)
        {
            c.push_back(i*10);  // now we have pushed individual elements 
        }
         
        // now we will push entire row into original vector
        v.push_back(c);
    }
    // now we will do function call
    print(v);
    return 0;
}
#include<iostream>
#include<algorithm>

using namespace std;

int matmed(int **max,int r,int c)
{
    int min = max[0][0];
    int max1 = max[0][c-1];

    // now we are finding min and max and updating it

    for(int i=1;i<r;i++)
    {
        if(max[i][0]<min){min = max[i][0];}// updating min
        if(max[i][c-1]>max1){max1 = max[i][c-1];} // updating max

        int medpos = r*(c+1)/2; // calculating the median position
        // now we will deploy binary search
        while(min<max1){
            int mid =(min+max1)/2;
            int midpos=0;
            for(int i=0;i<r;i++)
            {
                midpos +=upper_bound(max[i],max[i]+c,mid)-max[i];  // it returns the iterator 
            }

            if(midpos<medpos)
            {
                max1=mid+1;
            }
            else{
                max1=mid;
            }



        }

    }
    return min;
}

// driver code
int main(){
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

  int   result = matmed(arr,m,n); 
   // function call
   cout<<result;
    return 0;
}
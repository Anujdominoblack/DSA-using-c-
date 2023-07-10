//  the problemt states that find all the 1's in an array
// this will be an naive solution
#include<iostream>
using namespace std;

int getresult(int arr[],int n)  //function to count cosecutive ones 
{
    int res=0;
    
    for(int i=0;i<n;i++) //loop for traversa;
    {   int curr=0;
        for(int j=i;j<n;j++)  //loop for counting
        {
            if(arr[j]==1)
            {
                curr++;
            }
            else{
                break;
            }
        }
        res=max(res,curr);
    }
    return res;
}

int main()
{
    int arr[]={1,0,1,1,0,1}; //array created
    int n=sizeof(arr)/sizeof(arr[0]);  //sizeof array
    cout<<getresult(arr,n);  //result is displayed
    return 0;
}
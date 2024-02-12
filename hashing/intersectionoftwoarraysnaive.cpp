// the idea of naive solution is traverse through element check all the elements and check for them in second array
// if it also present increase the counter 
#include<iostream>
using namespace std;

int intersection(int arr[],int brr[],int m,int n)
{   int res = 0 ;// counter 
    for(int i=0;i<m;i++)
    {
        // now we will check if the element appeared before or not 
        bool flag = false;
        for(int j=0;j<i;j++)
        {
            if(arr[j]==arr[i])
            {
                flag = true;  // true means element appeared
                break;
            }
        }
        if(flag==true){continue;} // as it appeared before that means is already check go to next element skip it 
        
        for(int j=0;j<n;j++)
        {
            if(arr[i]==brr[j])
            {
                res++; // increase the counter 
                // and if intersection found then break because for every element intersection max can be one 
                break;
            }
        }

    }
   return res;
}
// driver code
int main()
{
    int arr[] = {10,15,20,15,30,30,5};
    int brr[] = {30,5,30,80};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(brr)/sizeof(brr[0]);
    int result;
    result =  intersection(arr,brr,m,n);
    cout<<result;
    return 0;
}
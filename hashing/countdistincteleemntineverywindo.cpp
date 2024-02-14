// in this problem we are going to count no of distinct elements in array window
// first we will implement the naive solution 
#include<iostream>
using namespace std;

void printdis(int arr[],int n,int k)  // k refers to size to each window
{  for(int i=0;i<=n-k;i++)  // i-k for window count
{
    int count =0;
    for(int j=0;j<k;j++) // inside each window 
    {
      bool flag = false;
      for(int p=0;p<j;p++)
      {
        if(arr[p+j]==arr[i+p])
        {
            flag = true;
            break;
        }
      }
      if(flag == false){count++;}
    }
    cout<<count<<" ";
}

}

// driver code

int main()
{
    int arr[] = {10,20,20,10,30,40,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    printdis(arr,n,4);
    return 0;
}
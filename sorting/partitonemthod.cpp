// now in the naive partion method we will traverse throught the array and create a temporary array and copy 
// elements and then copy temp array into original 
#include<iostream>
using namespace std;
// partiton function 
void partition(int arr[],int l,int h,int p)  // p is our pivot element 
{
    int temp[h-l+1];
    int index=0;
    for(int i=l;i<=h;i++)
    {
        if(arr[i]<=arr[p])   // copying smaller or equal to elements 
        {
           temp[index]=arr[i];
           index++;
        }
    }
    // now we will copy greater elements
    for(int i=l;i<=h;i++)
    {
        if(arr[i]>arr[p])
        {
            temp[index]=arr[i];
            index++;
        }
    }
    // here our temporary array is complete
    //now we will copy temp into original
    for(int i=0;i<=h;i++)
    {
        arr[i]=temp[i-l];
    }
    // printing the result
    for(int i=0;i<=h;i++)
    {
        cout<<arr[i]<<" ";
    }
}

// driver code
int main()
{
  int arr[]={5,13,6,9,12,11,8};
  partition(arr,0,6,6);
  return 0;
}
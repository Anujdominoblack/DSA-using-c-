// the idea of merge function is similar we split the input array into two parts 
// from low to mid and from mid+1 to high
// and by doing so we will use previous logic
#include<iostream>
#include<algorithm>
using namespace std;

// function for merge 
void merge(int arr[],int low,int mid,int high)
{
    int n1=mid-low+1; // for size of two arrays that are we are dividing
    int n2=high-mid;
     
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=arr[low+i];
    }
    for(int j=0;j<n2;j++)
    {
        right[j]=arr[mid+1+j];
    }
    // now as our left and right array is succesfullly created
    // now we will apply our merge logic
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;  // increasing left array
            // increasing input array size
        }
        else{
            arr[k]=right[j];
            j++;
          
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=right[j];
        j++;
        k++;
    }

  for(int i=0;i<high;i++)
  {
    cout<<arr[i]<<" ";
  }
   
}

//driver code
int main()
{
    int arr[]={10,15,21,01,51,98,82};
   
    merge(arr,0,3,6);
    return 0;
}